#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15319956344933478464ULL;
signed char var_2 = (signed char)-47;
unsigned int var_11 = 2887145902U;
int zero = 0;
unsigned int var_13 = 2766229698U;
int var_14 = 1181671459;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
