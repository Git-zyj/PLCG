#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 4985881971751717293ULL;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)86;
unsigned short var_10 = (unsigned short)23691;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 1686844962;
int var_16 = 1200085578;
void init() {
}

void checksum() {
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
