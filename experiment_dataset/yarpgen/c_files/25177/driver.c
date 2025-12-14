#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3734677282578665247LL;
long long int var_6 = -3530738873554480438LL;
unsigned int var_11 = 2183690381U;
unsigned short var_14 = (unsigned short)3626;
int zero = 0;
unsigned char var_16 = (unsigned char)26;
int var_17 = -205123453;
void init() {
}

void checksum() {
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
