#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
unsigned int var_8 = 1653419364U;
unsigned short var_10 = (unsigned short)13749;
int zero = 0;
unsigned int var_12 = 1072140920U;
unsigned char var_13 = (unsigned char)1;
unsigned char var_14 = (unsigned char)140;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
