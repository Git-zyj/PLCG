#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1977004939;
unsigned char var_9 = (unsigned char)248;
unsigned char var_10 = (unsigned char)171;
unsigned char var_12 = (unsigned char)244;
unsigned short var_14 = (unsigned short)6574;
int zero = 0;
int var_19 = 856365782;
unsigned short var_20 = (unsigned short)31607;
unsigned int var_21 = 1744705299U;
unsigned char var_22 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
