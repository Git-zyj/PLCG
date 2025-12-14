#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)185;
unsigned int var_5 = 3199425043U;
unsigned char var_7 = (unsigned char)116;
unsigned char var_8 = (unsigned char)220;
int zero = 0;
unsigned char var_10 = (unsigned char)223;
unsigned char var_11 = (unsigned char)96;
unsigned char var_12 = (unsigned char)24;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
