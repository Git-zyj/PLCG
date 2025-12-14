#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1001162249177006191LL;
unsigned short var_1 = (unsigned short)53435;
long long int var_2 = 6470748533014556931LL;
unsigned short var_5 = (unsigned short)12922;
unsigned short var_7 = (unsigned short)21129;
signed char var_10 = (signed char)102;
unsigned int var_12 = 334124783U;
int zero = 0;
unsigned short var_14 = (unsigned short)36549;
signed char var_15 = (signed char)81;
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
