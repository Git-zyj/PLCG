#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5292913533988097253LL;
unsigned char var_1 = (unsigned char)147;
unsigned char var_2 = (unsigned char)247;
unsigned int var_3 = 2286671813U;
unsigned char var_7 = (unsigned char)90;
unsigned char var_8 = (unsigned char)148;
int zero = 0;
signed char var_10 = (signed char)-126;
unsigned char var_11 = (unsigned char)75;
unsigned int var_12 = 1298115483U;
int var_13 = 532002114;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
