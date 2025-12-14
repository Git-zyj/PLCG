#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)92;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 13980153947698357521ULL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 4019953644U;
int zero = 0;
int var_18 = 1121433388;
int var_19 = -1995757647;
unsigned int var_20 = 2091089232U;
unsigned short var_21 = (unsigned short)61968;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
