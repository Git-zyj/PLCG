#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)58148;
unsigned short var_6 = (unsigned short)4434;
unsigned long long int var_10 = 11522675698694673231ULL;
int zero = 0;
int var_11 = -2120634076;
signed char var_12 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
