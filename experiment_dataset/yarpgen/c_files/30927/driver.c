#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)30185;
unsigned long long int var_4 = 6780561683068407967ULL;
unsigned long long int var_7 = 14892799268397883852ULL;
signed char var_12 = (signed char)84;
int zero = 0;
unsigned char var_16 = (unsigned char)139;
unsigned char var_17 = (unsigned char)6;
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
