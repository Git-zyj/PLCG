#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)199;
signed char var_2 = (signed char)-117;
unsigned char var_5 = (unsigned char)85;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 528765030U;
int zero = 0;
unsigned short var_13 = (unsigned short)30198;
unsigned int var_14 = 2538347252U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
