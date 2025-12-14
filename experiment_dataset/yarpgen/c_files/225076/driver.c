#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30435;
long long int var_3 = -974750972151156827LL;
int var_5 = -1862236778;
short var_11 = (short)-1766;
int zero = 0;
signed char var_14 = (signed char)122;
long long int var_15 = -8247504410017880059LL;
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
