#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24697;
long long int var_6 = -3585404444392505098LL;
long long int var_8 = -948348760226236088LL;
unsigned int var_12 = 3297745812U;
unsigned long long int var_17 = 6590920411358057011ULL;
unsigned int var_18 = 2574625605U;
int zero = 0;
unsigned char var_19 = (unsigned char)98;
int var_20 = 250101430;
unsigned short var_21 = (unsigned short)2631;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
