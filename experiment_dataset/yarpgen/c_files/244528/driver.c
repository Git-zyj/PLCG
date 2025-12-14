#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32179;
int var_3 = 1339572634;
short var_5 = (short)19026;
unsigned char var_14 = (unsigned char)2;
int zero = 0;
signed char var_15 = (signed char)39;
short var_16 = (short)17826;
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
