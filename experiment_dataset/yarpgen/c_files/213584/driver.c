#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2276431775U;
unsigned int var_9 = 2784920524U;
int zero = 0;
unsigned char var_14 = (unsigned char)130;
short var_15 = (short)-12930;
unsigned long long int var_16 = 17518402390509049287ULL;
unsigned int var_17 = 2113367131U;
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
