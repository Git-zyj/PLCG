#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
short var_1 = (short)10101;
_Bool var_5 = (_Bool)1;
unsigned short var_10 = (unsigned short)40046;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)45324;
int zero = 0;
long long int var_19 = -6424616420582137570LL;
signed char var_20 = (signed char)31;
long long int var_21 = -2174911499145690888LL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)65450;
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
