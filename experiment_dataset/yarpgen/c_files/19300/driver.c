#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)9563;
unsigned long long int var_11 = 13021334386798717656ULL;
unsigned int var_12 = 1982330952U;
int zero = 0;
unsigned short var_14 = (unsigned short)52299;
unsigned short var_15 = (unsigned short)49276;
void init() {
}

void checksum() {
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
