#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13727276535887461348ULL;
unsigned long long int var_5 = 14877558086527675086ULL;
short var_13 = (short)32023;
int zero = 0;
int var_15 = 1324843415;
unsigned char var_16 = (unsigned char)66;
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
