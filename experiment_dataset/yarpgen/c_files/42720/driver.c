#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 598190350U;
int var_6 = 318429014;
int var_16 = -321596093;
unsigned int var_17 = 3287630088U;
int var_18 = 1982245750;
int zero = 0;
unsigned int var_20 = 2010524152U;
unsigned short var_21 = (unsigned short)10426;
unsigned int var_22 = 3178914905U;
unsigned int var_23 = 1962332959U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
