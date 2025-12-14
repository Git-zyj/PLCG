#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5815504117689675688LL;
int var_4 = 1714953713;
signed char var_6 = (signed char)-9;
unsigned long long int var_7 = 9152772928796243571ULL;
long long int var_11 = 3821702322113251382LL;
int var_12 = 1092734227;
unsigned char var_13 = (unsigned char)241;
int zero = 0;
unsigned int var_17 = 1145289484U;
int var_18 = 63568137;
void init() {
}

void checksum() {
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
