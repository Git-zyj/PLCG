#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4107858881U;
signed char var_4 = (signed char)-51;
unsigned short var_7 = (unsigned short)44327;
long long int var_14 = -3187435749175480785LL;
int zero = 0;
long long int var_15 = 7537911108096748406LL;
unsigned char var_16 = (unsigned char)41;
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
