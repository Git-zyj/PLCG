#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 964009681U;
unsigned int var_2 = 3912864622U;
unsigned int var_3 = 3052654350U;
unsigned int var_4 = 2802133102U;
unsigned int var_5 = 3017501055U;
unsigned int var_6 = 743118075U;
int var_8 = -100621548;
unsigned int var_12 = 2692859489U;
int zero = 0;
unsigned int var_13 = 3110510615U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1532283494U;
unsigned int var_16 = 1230643300U;
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
