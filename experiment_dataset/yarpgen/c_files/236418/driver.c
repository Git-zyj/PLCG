#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9338623090268317746ULL;
short var_3 = (short)14286;
short var_8 = (short)-13337;
int zero = 0;
unsigned short var_11 = (unsigned short)1398;
unsigned long long int var_12 = 12701815152997558012ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
