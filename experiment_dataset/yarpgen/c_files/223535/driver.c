#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1514635765;
unsigned long long int var_4 = 1479653059814814748ULL;
unsigned char var_9 = (unsigned char)45;
unsigned char var_11 = (unsigned char)171;
int zero = 0;
unsigned int var_14 = 291485013U;
unsigned int var_15 = 417598434U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
