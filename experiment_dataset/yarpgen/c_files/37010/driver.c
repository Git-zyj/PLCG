#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1749123258;
unsigned char var_3 = (unsigned char)207;
short var_7 = (short)31732;
unsigned int var_8 = 2240743893U;
int zero = 0;
signed char var_14 = (signed char)69;
unsigned short var_15 = (unsigned short)9526;
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
