#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)99;
unsigned char var_11 = (unsigned char)186;
unsigned char var_12 = (unsigned char)125;
int zero = 0;
unsigned char var_13 = (unsigned char)96;
unsigned char var_14 = (unsigned char)2;
unsigned char var_15 = (unsigned char)23;
unsigned char var_16 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
