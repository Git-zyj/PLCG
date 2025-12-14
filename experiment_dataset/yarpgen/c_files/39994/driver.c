#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 966484606;
short var_4 = (short)19122;
long long int var_6 = -6136998499367844027LL;
unsigned char var_8 = (unsigned char)239;
int var_12 = -721264789;
int var_16 = -2070767522;
unsigned short var_17 = (unsigned short)46197;
int zero = 0;
unsigned char var_20 = (unsigned char)157;
int var_21 = -237885247;
unsigned short var_22 = (unsigned short)41619;
void init() {
}

void checksum() {
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
