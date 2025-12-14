#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58471;
long long int var_2 = 2126298135627287990LL;
int var_4 = 1178196000;
signed char var_5 = (signed char)-19;
unsigned int var_10 = 3883222463U;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_16 = 2051930397630317167LL;
signed char var_17 = (signed char)92;
int var_18 = 1580969672;
void init() {
}

void checksum() {
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
