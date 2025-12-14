#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)113;
unsigned short var_4 = (unsigned short)23195;
int var_10 = 913820736;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)13009;
unsigned short var_15 = (unsigned short)42304;
unsigned int var_16 = 3750988406U;
short var_17 = (short)15437;
unsigned short var_18 = (unsigned short)58151;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
