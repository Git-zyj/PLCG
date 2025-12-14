#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 133690883;
unsigned char var_8 = (unsigned char)173;
unsigned int var_16 = 1659552868U;
int zero = 0;
unsigned short var_19 = (unsigned short)43726;
unsigned long long int var_20 = 9596142900863545210ULL;
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
