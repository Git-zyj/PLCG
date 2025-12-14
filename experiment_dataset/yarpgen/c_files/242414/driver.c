#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-905;
unsigned long long int var_6 = 16224922885486686302ULL;
unsigned long long int var_13 = 15676364300741106776ULL;
int zero = 0;
unsigned long long int var_15 = 8382839391367735449ULL;
unsigned short var_16 = (unsigned short)44992;
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
