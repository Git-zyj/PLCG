#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-93;
int var_5 = -351164918;
unsigned char var_8 = (unsigned char)65;
int var_10 = 2116098424;
short var_14 = (short)16599;
int zero = 0;
unsigned char var_15 = (unsigned char)49;
signed char var_16 = (signed char)-97;
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
