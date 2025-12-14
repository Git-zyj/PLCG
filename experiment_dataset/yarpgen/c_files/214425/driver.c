#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1540927032;
unsigned long long int var_3 = 15075244667193356730ULL;
signed char var_4 = (signed char)-72;
signed char var_8 = (signed char)-89;
unsigned long long int var_11 = 15330437790863278447ULL;
unsigned short var_12 = (unsigned short)55212;
int zero = 0;
unsigned int var_15 = 2461766190U;
unsigned long long int var_16 = 11098371559762491607ULL;
int var_17 = -281818552;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)65304;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
