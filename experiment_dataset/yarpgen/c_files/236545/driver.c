#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17011436322164578649ULL;
unsigned short var_7 = (unsigned short)32027;
unsigned char var_13 = (unsigned char)173;
int zero = 0;
unsigned short var_16 = (unsigned short)48106;
unsigned int var_17 = 2116047231U;
void init() {
}

void checksum() {
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
