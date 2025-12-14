#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)21769;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)-13;
unsigned long long int var_7 = 12184701000298833953ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)53260;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-18140;
long long int var_16 = 6166176733410124925LL;
signed char var_17 = (signed char)-1;
int zero = 0;
unsigned char var_18 = (unsigned char)2;
long long int var_19 = 2043602367603502737LL;
int var_20 = -1136237395;
int var_21 = -530343362;
signed char var_22 = (signed char)-113;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
