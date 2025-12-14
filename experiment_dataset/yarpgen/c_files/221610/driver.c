#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23988;
unsigned short var_2 = (unsigned short)52389;
_Bool var_6 = (_Bool)1;
unsigned char var_10 = (unsigned char)173;
unsigned char var_11 = (unsigned char)122;
unsigned short var_14 = (unsigned short)56236;
long long int var_16 = -6255047769254385179LL;
unsigned long long int var_17 = 17474212087513871479ULL;
long long int var_18 = -4620495956174226440LL;
int zero = 0;
signed char var_19 = (signed char)122;
unsigned long long int var_20 = 1812167592310651761ULL;
unsigned long long int var_21 = 17940110516993249491ULL;
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
