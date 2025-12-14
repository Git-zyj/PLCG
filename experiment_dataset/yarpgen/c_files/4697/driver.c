#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)7;
unsigned char var_8 = (unsigned char)118;
int var_9 = 2042859097;
unsigned long long int var_10 = 5328720384943557132ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)10923;
unsigned short var_16 = (unsigned short)56159;
void init() {
}

void checksum() {
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
