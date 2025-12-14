#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)194;
unsigned long long int var_3 = 8066790233682435314ULL;
short var_7 = (short)-27910;
short var_9 = (short)13419;
int zero = 0;
short var_10 = (short)28884;
long long int var_11 = 8424247587835177773LL;
int var_12 = 76556406;
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
