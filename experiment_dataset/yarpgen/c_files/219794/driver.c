#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 203439695U;
int var_5 = -408737370;
unsigned short var_11 = (unsigned short)53007;
unsigned int var_14 = 3170193037U;
int var_15 = 1199236438;
unsigned long long int var_17 = 12669033209862016602ULL;
int zero = 0;
int var_19 = -83979991;
int var_20 = 1093956559;
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
