#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1227857287;
unsigned long long int var_6 = 12102173267277313721ULL;
unsigned long long int var_8 = 12381933799102504696ULL;
int var_10 = -579798778;
unsigned long long int var_13 = 6759520328675034333ULL;
int zero = 0;
int var_18 = -1786423534;
int var_19 = -950563027;
unsigned long long int var_20 = 9906717136761803409ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
