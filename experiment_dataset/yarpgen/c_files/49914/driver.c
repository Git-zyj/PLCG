#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)0;
signed char var_10 = (signed char)13;
int zero = 0;
unsigned short var_12 = (unsigned short)49418;
unsigned int var_13 = 2544200373U;
long long int var_14 = 6669772113898691748LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
