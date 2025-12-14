#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8361586939504042524ULL;
unsigned long long int var_12 = 13620704627822959697ULL;
int zero = 0;
unsigned int var_14 = 2876017184U;
long long int var_15 = 4344454423887741554LL;
short var_16 = (short)-30594;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
