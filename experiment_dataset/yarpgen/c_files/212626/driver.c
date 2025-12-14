#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_4 = -6427101180873666256LL;
unsigned int var_8 = 1131224395U;
unsigned long long int var_15 = 7947551844226499452ULL;
short var_19 = (short)21912;
int zero = 0;
unsigned short var_20 = (unsigned short)23299;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2481130052U;
unsigned short var_23 = (unsigned short)64366;
int var_24 = -1214379360;
void init() {
}

void checksum() {
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
