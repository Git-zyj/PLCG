#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35189;
_Bool var_2 = (_Bool)1;
int var_3 = 787875824;
signed char var_6 = (signed char)81;
unsigned short var_8 = (unsigned short)47873;
int zero = 0;
unsigned char var_12 = (unsigned char)163;
unsigned char var_13 = (unsigned char)28;
unsigned long long int var_14 = 12013713273002282531ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
