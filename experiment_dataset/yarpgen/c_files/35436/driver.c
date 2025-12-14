#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6867826688013895665ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)69;
unsigned short var_10 = (unsigned short)45407;
int zero = 0;
unsigned char var_12 = (unsigned char)86;
unsigned char var_13 = (unsigned char)99;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
