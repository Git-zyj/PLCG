#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1352991497U;
unsigned short var_3 = (unsigned short)38182;
_Bool var_10 = (_Bool)1;
long long int var_13 = 3084652606426257946LL;
unsigned long long int var_14 = 13314823063738964464ULL;
unsigned short var_16 = (unsigned short)17887;
int zero = 0;
long long int var_19 = -8075105708757406424LL;
unsigned short var_20 = (unsigned short)37826;
void init() {
}

void checksum() {
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
