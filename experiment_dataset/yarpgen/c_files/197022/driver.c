#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1840970410U;
short var_3 = (short)-31523;
short var_4 = (short)-12836;
unsigned int var_5 = 1962847566U;
unsigned long long int var_6 = 76675624499308940ULL;
int var_8 = -363778405;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)4077;
short var_15 = (short)12778;
unsigned long long int var_16 = 16163732611612093954ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
