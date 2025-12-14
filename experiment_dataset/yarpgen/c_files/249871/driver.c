#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1566751555;
unsigned int var_6 = 2924264090U;
int var_11 = 1775767103;
long long int var_14 = 8389719757445572333LL;
int zero = 0;
unsigned int var_15 = 2349068648U;
unsigned short var_16 = (unsigned short)13749;
unsigned short var_17 = (unsigned short)23819;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
