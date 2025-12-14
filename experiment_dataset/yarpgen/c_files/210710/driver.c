#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)109;
long long int var_4 = 1189895108265279181LL;
unsigned char var_7 = (unsigned char)239;
short var_12 = (short)-476;
unsigned short var_14 = (unsigned short)57657;
int zero = 0;
long long int var_16 = -8290608397777840384LL;
unsigned short var_17 = (unsigned short)58102;
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
