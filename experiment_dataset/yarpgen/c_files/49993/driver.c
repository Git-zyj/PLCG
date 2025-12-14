#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)33;
short var_5 = (short)17365;
unsigned int var_6 = 20198735U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-20;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)58;
unsigned char var_16 = (unsigned char)214;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
