#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28075;
short var_3 = (short)-22435;
short var_11 = (short)3123;
int var_12 = 941298402;
short var_15 = (short)-844;
int var_17 = 928444132;
int zero = 0;
short var_19 = (short)22595;
short var_20 = (short)7977;
short var_21 = (short)20698;
short var_22 = (short)804;
int var_23 = 1562999976;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
