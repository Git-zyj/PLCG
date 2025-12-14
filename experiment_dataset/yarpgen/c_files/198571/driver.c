#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2139728772;
unsigned char var_1 = (unsigned char)48;
unsigned char var_2 = (unsigned char)107;
unsigned char var_3 = (unsigned char)162;
int var_5 = 1756066902;
unsigned char var_6 = (unsigned char)100;
unsigned char var_8 = (unsigned char)173;
int zero = 0;
unsigned char var_10 = (unsigned char)108;
int var_11 = -1767014250;
unsigned char var_12 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
