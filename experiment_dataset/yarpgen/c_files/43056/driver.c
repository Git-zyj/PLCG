#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5879;
unsigned int var_1 = 337851813U;
unsigned short var_2 = (unsigned short)2852;
signed char var_4 = (signed char)-81;
int var_6 = -1804792928;
unsigned short var_7 = (unsigned short)56346;
int zero = 0;
int var_11 = -975498946;
int var_12 = 676040511;
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
