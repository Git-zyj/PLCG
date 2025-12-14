#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2631038467U;
short var_3 = (short)1527;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)-63;
unsigned int var_10 = 803536602U;
int zero = 0;
int var_11 = -1573935020;
short var_12 = (short)29435;
short var_13 = (short)5566;
short var_14 = (short)-1179;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
