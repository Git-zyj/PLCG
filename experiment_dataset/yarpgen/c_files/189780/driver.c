#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)6276;
unsigned int var_5 = 137495566U;
unsigned char var_6 = (unsigned char)231;
short var_12 = (short)19648;
int zero = 0;
unsigned int var_15 = 1757076330U;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
