#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14687922581970899301ULL;
signed char var_4 = (signed char)-15;
signed char var_7 = (signed char)-91;
unsigned long long int var_12 = 16350960412406076246ULL;
unsigned long long int var_13 = 13492972268070561510ULL;
unsigned int var_14 = 611933301U;
int var_17 = -2142253984;
int zero = 0;
unsigned char var_19 = (unsigned char)27;
unsigned long long int var_20 = 18275989071360522947ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
