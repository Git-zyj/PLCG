#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)80;
short var_2 = (short)2307;
unsigned long long int var_7 = 16373097225984661856ULL;
unsigned short var_8 = (unsigned short)33157;
int zero = 0;
unsigned short var_11 = (unsigned short)11258;
unsigned short var_12 = (unsigned short)59522;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
