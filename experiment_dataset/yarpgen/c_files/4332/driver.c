#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_6 = (short)3371;
unsigned short var_8 = (unsigned short)18409;
signed char var_10 = (signed char)-63;
long long int var_11 = 2832023382436696460LL;
int zero = 0;
unsigned int var_14 = 2031328631U;
signed char var_15 = (signed char)-25;
short var_16 = (short)3026;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
