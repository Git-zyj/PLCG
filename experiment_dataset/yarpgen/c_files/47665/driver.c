#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = -1731398750468914418LL;
short var_6 = (short)16396;
short var_7 = (short)10467;
unsigned short var_9 = (unsigned short)2849;
long long int var_10 = 2118321864314032827LL;
int zero = 0;
unsigned int var_13 = 231311789U;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
