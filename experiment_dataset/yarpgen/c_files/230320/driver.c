#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
short var_6 = (short)8261;
_Bool var_7 = (_Bool)0;
short var_13 = (short)10691;
int zero = 0;
unsigned long long int var_14 = 9658123687047823366ULL;
unsigned int var_15 = 2850564461U;
_Bool var_16 = (_Bool)1;
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
