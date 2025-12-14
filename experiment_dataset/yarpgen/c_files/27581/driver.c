#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)104;
unsigned long long int var_12 = 9241060161819851674ULL;
unsigned char var_13 = (unsigned char)122;
int zero = 0;
unsigned char var_17 = (unsigned char)234;
int var_18 = 1688863642;
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
