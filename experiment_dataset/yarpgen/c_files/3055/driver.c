#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11928079851931163300ULL;
unsigned char var_14 = (unsigned char)33;
unsigned long long int var_18 = 17115303844689725827ULL;
int zero = 0;
int var_20 = 188564642;
short var_21 = (short)19096;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
