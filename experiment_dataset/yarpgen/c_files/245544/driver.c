#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-32193;
unsigned long long int var_6 = 3992853013052779881ULL;
int var_7 = 516800541;
int var_16 = -989619673;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1699165735U;
unsigned long long int var_19 = 4960662575372611309ULL;
unsigned long long int var_20 = 13033628952234530276ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
