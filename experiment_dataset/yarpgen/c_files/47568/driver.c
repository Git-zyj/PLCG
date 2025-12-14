#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-23360;
unsigned int var_8 = 3887761734U;
unsigned int var_10 = 2132601562U;
unsigned long long int var_13 = 8358736588979436860ULL;
int zero = 0;
unsigned int var_15 = 2377592348U;
unsigned long long int var_16 = 8049776559020955927ULL;
unsigned long long int var_17 = 13980776467103963331ULL;
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
