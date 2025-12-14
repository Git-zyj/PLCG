#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)29295;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-24564;
unsigned char var_14 = (unsigned char)160;
int zero = 0;
short var_17 = (short)-13254;
short var_18 = (short)-19409;
signed char var_19 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
