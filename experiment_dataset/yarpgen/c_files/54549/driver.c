#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-8891;
unsigned char var_7 = (unsigned char)242;
unsigned char var_8 = (unsigned char)236;
unsigned char var_9 = (unsigned char)41;
int zero = 0;
int var_11 = -2046692443;
short var_12 = (short)-7639;
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
