#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3980365809U;
signed char var_3 = (signed char)-28;
unsigned int var_4 = 2791601593U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_8 = 2985234481576364118ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 10594085751883151074ULL;
int zero = 0;
unsigned int var_16 = 1223611604U;
unsigned short var_17 = (unsigned short)9399;
unsigned long long int var_18 = 1947448906743869469ULL;
void init() {
}

void checksum() {
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
