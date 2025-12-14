#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)0;
unsigned short var_5 = (unsigned short)10192;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)41137;
int zero = 0;
unsigned short var_12 = (unsigned short)23546;
unsigned short var_13 = (unsigned short)6114;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-23437;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
