#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8718;
unsigned long long int var_1 = 7593440808844048307ULL;
unsigned short var_3 = (unsigned short)34053;
int zero = 0;
unsigned short var_14 = (unsigned short)24177;
unsigned short var_15 = (unsigned short)21629;
unsigned long long int var_16 = 10717860335643591735ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
