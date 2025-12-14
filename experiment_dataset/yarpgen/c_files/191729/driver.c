#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7404;
unsigned short var_1 = (unsigned short)19312;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)24270;
long long int var_8 = -9099018134656339682LL;
long long int var_9 = 3275183835031547770LL;
_Bool var_10 = (_Bool)1;
long long int var_11 = 862727683589825986LL;
int var_12 = -14635430;
unsigned short var_13 = (unsigned short)15446;
unsigned short var_14 = (unsigned short)21400;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)80;
int zero = 0;
unsigned int var_20 = 1623562699U;
short var_21 = (short)-4825;
unsigned short var_22 = (unsigned short)49627;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
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
