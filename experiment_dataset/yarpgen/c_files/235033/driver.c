#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3804552077U;
_Bool var_2 = (_Bool)0;
int var_4 = -1964702687;
_Bool var_6 = (_Bool)1;
short var_10 = (short)-24129;
long long int var_12 = 8100736306535256041LL;
long long int var_13 = -8352567388088521346LL;
int zero = 0;
short var_14 = (short)-31475;
unsigned short var_15 = (unsigned short)47825;
unsigned short var_16 = (unsigned short)59622;
unsigned long long int var_17 = 2252064349593604058ULL;
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
