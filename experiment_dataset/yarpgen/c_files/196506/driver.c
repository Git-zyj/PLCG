#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6576562619223388351LL;
int var_6 = -1709720169;
unsigned char var_9 = (unsigned char)160;
unsigned int var_12 = 1184176866U;
int var_14 = 53626906;
int zero = 0;
unsigned char var_18 = (unsigned char)149;
unsigned char var_19 = (unsigned char)87;
void init() {
}

void checksum() {
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
