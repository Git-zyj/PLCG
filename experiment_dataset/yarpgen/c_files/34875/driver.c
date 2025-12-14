#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_12 = (unsigned char)235;
unsigned int var_17 = 2813674657U;
unsigned short var_19 = (unsigned short)45112;
int zero = 0;
unsigned char var_20 = (unsigned char)131;
unsigned short var_21 = (unsigned short)24205;
unsigned int var_22 = 2073225046U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
