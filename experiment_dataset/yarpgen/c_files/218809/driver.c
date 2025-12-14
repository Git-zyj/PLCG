#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3545594426U;
unsigned short var_7 = (unsigned short)59651;
unsigned short var_8 = (unsigned short)52737;
int zero = 0;
short var_14 = (short)-22706;
long long int var_15 = 8471585072304143443LL;
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
