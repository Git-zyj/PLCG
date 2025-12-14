#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1251481418187572238ULL;
short var_2 = (short)23941;
unsigned int var_6 = 509829310U;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 10718044021462980757ULL;
unsigned long long int var_12 = 7270833393980406651ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 3620662567631937603ULL;
unsigned long long int var_17 = 16283623050540640741ULL;
signed char var_18 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
