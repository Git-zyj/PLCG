#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28271;
unsigned int var_2 = 2489254073U;
unsigned char var_5 = (unsigned char)158;
unsigned int var_8 = 2796248764U;
int zero = 0;
unsigned long long int var_11 = 2998096740378329999ULL;
unsigned short var_12 = (unsigned short)17419;
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
