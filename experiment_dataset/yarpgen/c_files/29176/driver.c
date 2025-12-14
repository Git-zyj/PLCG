#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -641441325;
signed char var_2 = (signed char)-115;
unsigned long long int var_5 = 8551523431085757910ULL;
int zero = 0;
unsigned long long int var_14 = 3867881443144407434ULL;
unsigned char var_15 = (unsigned char)87;
unsigned short var_16 = (unsigned short)24403;
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
