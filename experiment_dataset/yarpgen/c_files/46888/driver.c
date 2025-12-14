#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23638;
short var_5 = (short)24294;
unsigned char var_7 = (unsigned char)23;
signed char var_11 = (signed char)111;
short var_12 = (short)-7841;
unsigned char var_14 = (unsigned char)16;
int zero = 0;
unsigned char var_15 = (unsigned char)185;
unsigned char var_16 = (unsigned char)22;
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
