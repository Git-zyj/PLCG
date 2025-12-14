#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45144;
unsigned int var_2 = 2600135157U;
int var_3 = 889382475;
_Bool var_5 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int var_14 = -1424513684;
int var_16 = 858420634;
int var_17 = 1082740332;
int zero = 0;
unsigned int var_18 = 708466013U;
unsigned long long int var_19 = 2566811834649040104ULL;
int var_20 = -1840016607;
int var_21 = -296784811;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)27585;
int var_24 = -967301692;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
