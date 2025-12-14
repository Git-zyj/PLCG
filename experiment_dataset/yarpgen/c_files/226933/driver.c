#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)118;
long long int var_8 = -1620205564262750656LL;
long long int var_10 = 8029413794489284149LL;
unsigned int var_11 = 3788994033U;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 1374252655U;
signed char var_15 = (signed char)119;
unsigned short var_16 = (unsigned short)18100;
long long int var_17 = -4677994094452991464LL;
unsigned char var_18 = (unsigned char)33;
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
