#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1240965138U;
signed char var_7 = (signed char)115;
unsigned int var_9 = 1245247361U;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 986198387U;
unsigned int var_14 = 837655549U;
int zero = 0;
unsigned long long int var_17 = 15941753847272552014ULL;
unsigned long long int var_18 = 2629599876478102030ULL;
unsigned int var_19 = 3524643789U;
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
