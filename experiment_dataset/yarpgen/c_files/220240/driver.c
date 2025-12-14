#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8377;
long long int var_3 = -101226557601570575LL;
long long int var_5 = 4230800835151886113LL;
unsigned int var_10 = 554945214U;
signed char var_14 = (signed char)19;
int zero = 0;
int var_16 = 1879428012;
short var_17 = (short)-26901;
unsigned char var_18 = (unsigned char)45;
unsigned long long int var_19 = 14843502833687686233ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
