#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)1036;
unsigned short var_5 = (unsigned short)24957;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)51;
unsigned char var_14 = (unsigned char)69;
unsigned char var_15 = (unsigned char)143;
int zero = 0;
unsigned short var_16 = (unsigned short)32363;
unsigned short var_17 = (unsigned short)5485;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
