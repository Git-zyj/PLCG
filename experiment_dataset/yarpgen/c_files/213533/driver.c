#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)40;
int var_8 = -1428525819;
int zero = 0;
unsigned long long int var_12 = 11070416292743623190ULL;
unsigned int var_13 = 3913271726U;
unsigned short var_14 = (unsigned short)18880;
unsigned long long int var_15 = 2906642767083679531ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
