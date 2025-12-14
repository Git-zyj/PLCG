#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)101;
int var_3 = 2108375588;
int var_7 = -1661039336;
short var_8 = (short)22007;
short var_10 = (short)-9403;
long long int var_12 = -3015398804626052762LL;
int var_16 = 841294419;
unsigned long long int var_18 = 18172388483050185660ULL;
int zero = 0;
short var_19 = (short)6787;
unsigned long long int var_20 = 17863081246897655962ULL;
unsigned char var_21 = (unsigned char)115;
short var_22 = (short)-9847;
unsigned short var_23 = (unsigned short)12936;
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
