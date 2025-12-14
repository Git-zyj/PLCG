#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)13373;
unsigned long long int var_6 = 15403521728755099681ULL;
unsigned char var_12 = (unsigned char)198;
int zero = 0;
unsigned int var_14 = 215116452U;
unsigned char var_15 = (unsigned char)13;
void init() {
}

void checksum() {
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
