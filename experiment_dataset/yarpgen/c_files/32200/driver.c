#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4254054776U;
short var_4 = (short)6579;
short var_5 = (short)-3433;
signed char var_6 = (signed char)29;
int var_7 = 651128328;
short var_11 = (short)-13358;
int var_12 = -28528879;
signed char var_14 = (signed char)-121;
int zero = 0;
long long int var_15 = -5115163701367977392LL;
unsigned long long int var_16 = 16615737110594269609ULL;
signed char var_17 = (signed char)-77;
long long int var_18 = 2374653911169487287LL;
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
