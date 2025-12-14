#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1299922435;
short var_4 = (short)-32056;
int var_8 = 2046133923;
int zero = 0;
unsigned char var_11 = (unsigned char)122;
unsigned short var_12 = (unsigned short)45503;
long long int var_13 = 4428182296793243037LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
