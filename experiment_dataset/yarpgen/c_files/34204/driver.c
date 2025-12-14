#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)233;
unsigned short var_1 = (unsigned short)15405;
unsigned long long int var_2 = 4208699703013297502ULL;
unsigned char var_9 = (unsigned char)45;
unsigned char var_12 = (unsigned char)171;
int zero = 0;
unsigned short var_15 = (unsigned short)58393;
unsigned short var_16 = (unsigned short)33784;
unsigned char var_17 = (unsigned char)112;
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
