#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)9196;
unsigned short var_2 = (unsigned short)12788;
long long int var_4 = 8836342723748505309LL;
int zero = 0;
int var_12 = 2019781837;
unsigned long long int var_13 = 15016532789093635188ULL;
long long int var_14 = 3492798669727531088LL;
unsigned char var_15 = (unsigned char)18;
unsigned int var_16 = 2401658581U;
unsigned char var_17 = (unsigned char)4;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
