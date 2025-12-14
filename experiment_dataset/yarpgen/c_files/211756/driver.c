#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1360333752U;
int var_3 = 2130463480;
unsigned int var_7 = 3009364151U;
unsigned char var_10 = (unsigned char)144;
long long int var_11 = 2369634062684641529LL;
int zero = 0;
unsigned short var_14 = (unsigned short)36803;
long long int var_15 = 2149572236621054915LL;
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
