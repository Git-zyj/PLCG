#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1631201657;
signed char var_10 = (signed char)19;
signed char var_12 = (signed char)-101;
signed char var_13 = (signed char)71;
unsigned int var_14 = 3095287256U;
int zero = 0;
short var_17 = (short)31121;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)8;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
