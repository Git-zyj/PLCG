#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2124337639;
unsigned long long int var_5 = 965723708598119851ULL;
unsigned short var_6 = (unsigned short)4110;
unsigned char var_7 = (unsigned char)157;
int var_8 = 1283603955;
unsigned char var_14 = (unsigned char)246;
int zero = 0;
long long int var_16 = -4720347895497740625LL;
unsigned char var_17 = (unsigned char)42;
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
