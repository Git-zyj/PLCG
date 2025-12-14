#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2988978400U;
unsigned char var_3 = (unsigned char)26;
unsigned long long int var_11 = 18385131257038012272ULL;
int zero = 0;
short var_20 = (short)30740;
unsigned long long int var_21 = 9893716404351319569ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
