#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)26855;
signed char var_12 = (signed char)75;
unsigned short var_16 = (unsigned short)4902;
int zero = 0;
unsigned char var_20 = (unsigned char)21;
unsigned short var_21 = (unsigned short)58452;
unsigned char var_22 = (unsigned char)128;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
