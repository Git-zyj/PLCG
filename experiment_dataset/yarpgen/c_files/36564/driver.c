#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -862668140;
unsigned char var_10 = (unsigned char)1;
unsigned int var_14 = 2221238421U;
int zero = 0;
unsigned int var_17 = 2185787986U;
unsigned short var_18 = (unsigned short)21097;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
