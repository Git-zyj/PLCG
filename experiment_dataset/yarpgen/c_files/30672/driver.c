#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 8843640776773415596ULL;
unsigned char var_10 = (unsigned char)86;
unsigned char var_13 = (unsigned char)143;
int zero = 0;
int var_14 = -283216161;
unsigned int var_15 = 516693233U;
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
