#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 2799028273116675223ULL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-87;
_Bool var_13 = (_Bool)1;
unsigned long long int var_15 = 8355074726193046240ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)16171;
unsigned long long int var_18 = 15371046771870949040ULL;
unsigned long long int var_19 = 8652405992317232274ULL;
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
