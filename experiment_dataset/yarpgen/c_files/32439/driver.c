#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)33262;
unsigned short var_8 = (unsigned short)23028;
unsigned short var_10 = (unsigned short)65170;
unsigned short var_13 = (unsigned short)52471;
int zero = 0;
int var_15 = 944219528;
short var_16 = (short)-6744;
void init() {
}

void checksum() {
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
