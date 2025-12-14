#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7636517926049919548ULL;
unsigned char var_3 = (unsigned char)11;
unsigned long long int var_5 = 15756305636434779666ULL;
signed char var_6 = (signed char)-124;
int zero = 0;
short var_10 = (short)16019;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
