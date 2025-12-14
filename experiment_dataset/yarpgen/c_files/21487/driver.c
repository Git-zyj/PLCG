#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)58379;
short var_4 = (short)-6902;
unsigned char var_8 = (unsigned char)158;
long long int var_10 = 3809897230870981044LL;
int zero = 0;
unsigned char var_12 = (unsigned char)86;
unsigned char var_13 = (unsigned char)56;
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
