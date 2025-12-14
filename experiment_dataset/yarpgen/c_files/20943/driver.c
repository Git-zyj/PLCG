#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3327211872U;
short var_2 = (short)-1796;
int var_3 = -575664407;
unsigned char var_5 = (unsigned char)19;
unsigned int var_7 = 2578456323U;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = -1256159843;
unsigned char var_13 = (unsigned char)1;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)46823;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
