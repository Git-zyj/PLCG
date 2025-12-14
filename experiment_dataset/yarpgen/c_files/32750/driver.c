#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)7780;
long long int var_10 = -8116242337416642426LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 13688914478873888237ULL;
unsigned short var_16 = (unsigned short)28201;
int var_17 = 899368009;
void init() {
}

void checksum() {
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
