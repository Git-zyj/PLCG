#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11797;
unsigned char var_3 = (unsigned char)248;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 3115689298U;
short var_15 = (short)-6074;
unsigned char var_16 = (unsigned char)174;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
