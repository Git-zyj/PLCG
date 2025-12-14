#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)63;
int var_1 = 646441641;
short var_2 = (short)27379;
long long int var_3 = -2123592785259467382LL;
unsigned int var_4 = 4141936024U;
unsigned int var_7 = 53597462U;
long long int var_9 = -7124310359557160485LL;
unsigned long long int var_11 = 16683110629075287061ULL;
signed char var_13 = (signed char)62;
int zero = 0;
unsigned char var_16 = (unsigned char)16;
int var_17 = 1083145778;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
