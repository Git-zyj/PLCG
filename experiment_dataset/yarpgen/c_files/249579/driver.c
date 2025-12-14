#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1081761506U;
long long int var_7 = -8603951308788638550LL;
unsigned int var_10 = 1413398593U;
unsigned int var_12 = 2475307490U;
unsigned int var_13 = 566762775U;
unsigned long long int var_14 = 12837942497729775168ULL;
unsigned char var_15 = (unsigned char)55;
int zero = 0;
unsigned short var_17 = (unsigned short)43768;
unsigned char var_18 = (unsigned char)4;
unsigned short var_19 = (unsigned short)3013;
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
