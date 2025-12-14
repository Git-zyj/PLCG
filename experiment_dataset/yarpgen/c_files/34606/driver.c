#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1985678765U;
unsigned long long int var_3 = 16287480291153303135ULL;
int var_6 = -577886188;
signed char var_8 = (signed char)-88;
short var_9 = (short)13178;
long long int var_10 = -3350947393316577907LL;
int zero = 0;
unsigned long long int var_14 = 14457487342971259494ULL;
long long int var_15 = -2745289430028603716LL;
unsigned int var_16 = 714732120U;
short var_17 = (short)7850;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
