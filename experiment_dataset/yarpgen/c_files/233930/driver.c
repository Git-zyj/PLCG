#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -441132824;
unsigned long long int var_7 = 13092630993794435255ULL;
int zero = 0;
int var_15 = -1864920610;
unsigned char var_16 = (unsigned char)113;
unsigned short var_17 = (unsigned short)28275;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
