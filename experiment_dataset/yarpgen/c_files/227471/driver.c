#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 2352469540817425706LL;
int var_12 = -401821479;
int zero = 0;
unsigned short var_14 = (unsigned short)41215;
unsigned int var_15 = 41927802U;
unsigned char var_16 = (unsigned char)249;
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
