#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4831625317101537147LL;
long long int var_1 = -809397000302149407LL;
long long int var_4 = 8163150968951044449LL;
short var_5 = (short)-25141;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-7758;
unsigned char var_9 = (unsigned char)133;
long long int var_11 = 7288928070084944335LL;
unsigned short var_12 = (unsigned short)42084;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)88;
signed char var_15 = (signed char)-52;
long long int var_16 = -4842658610906756534LL;
unsigned long long int var_17 = 1775690731373763203ULL;
void init() {
}

void checksum() {
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
