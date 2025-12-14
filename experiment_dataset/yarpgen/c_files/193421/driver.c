#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 31647204U;
unsigned char var_3 = (unsigned char)77;
unsigned int var_5 = 2756359682U;
unsigned short var_7 = (unsigned short)56038;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 2881844594U;
unsigned short var_12 = (unsigned short)45063;
unsigned char var_13 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
