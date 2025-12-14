#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1545455609U;
unsigned int var_4 = 2048315652U;
short var_6 = (short)-26896;
unsigned short var_12 = (unsigned short)6809;
int zero = 0;
signed char var_14 = (signed char)-53;
short var_15 = (short)8602;
signed char var_16 = (signed char)5;
short var_17 = (short)-28063;
unsigned int var_18 = 2726096529U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
