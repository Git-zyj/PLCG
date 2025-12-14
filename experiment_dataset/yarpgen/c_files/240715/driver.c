#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 2304966915U;
unsigned int var_4 = 340885480U;
unsigned short var_7 = (unsigned short)23017;
int zero = 0;
signed char var_11 = (signed char)-16;
short var_12 = (short)22252;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
