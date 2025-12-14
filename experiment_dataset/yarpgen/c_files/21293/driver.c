#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57237;
unsigned short var_2 = (unsigned short)24730;
unsigned short var_5 = (unsigned short)14303;
unsigned short var_7 = (unsigned short)15989;
int zero = 0;
unsigned short var_10 = (unsigned short)40780;
unsigned short var_11 = (unsigned short)44503;
unsigned short var_12 = (unsigned short)56436;
unsigned short var_13 = (unsigned short)2400;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
