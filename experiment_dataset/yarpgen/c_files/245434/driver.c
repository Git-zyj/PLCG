#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58187;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 2720515814U;
short var_6 = (short)1732;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-21233;
unsigned short var_15 = (unsigned short)63173;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)13075;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
