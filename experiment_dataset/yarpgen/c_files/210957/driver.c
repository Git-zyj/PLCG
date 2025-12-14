#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21197;
unsigned short var_11 = (unsigned short)30701;
unsigned short var_13 = (unsigned short)14831;
unsigned char var_15 = (unsigned char)243;
int var_17 = 416584336;
int zero = 0;
int var_20 = 490135526;
unsigned char var_21 = (unsigned char)77;
int var_22 = -959804338;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
