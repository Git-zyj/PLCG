#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 3399393978947560067LL;
unsigned short var_2 = (unsigned short)44804;
unsigned int var_7 = 3378411517U;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)211;
unsigned char var_17 = (unsigned char)120;
unsigned int var_18 = 2876903481U;
int zero = 0;
int var_19 = 1946170049;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)(-127 - 1);
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
