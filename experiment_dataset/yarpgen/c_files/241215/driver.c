#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 188036169U;
unsigned int var_4 = 1439317273U;
unsigned long long int var_5 = 6850931495435753076ULL;
unsigned int var_11 = 3005986895U;
unsigned long long int var_12 = 2604614855542446931ULL;
unsigned int var_13 = 3423495498U;
int zero = 0;
int var_14 = 1959713184;
int var_15 = 431213626;
unsigned long long int var_16 = 6344382104299701686ULL;
unsigned int var_17 = 2177317017U;
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
