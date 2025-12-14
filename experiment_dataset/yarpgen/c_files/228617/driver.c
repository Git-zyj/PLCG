#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3413353105724661559ULL;
unsigned long long int var_1 = 5459531063834404796ULL;
unsigned long long int var_5 = 7071772309341572631ULL;
unsigned long long int var_6 = 18141194520612708268ULL;
unsigned short var_7 = (unsigned short)3829;
int zero = 0;
unsigned char var_12 = (unsigned char)189;
unsigned short var_13 = (unsigned short)58199;
short var_14 = (short)-16386;
unsigned short var_15 = (unsigned short)22047;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
