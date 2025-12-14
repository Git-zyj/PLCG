#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20321;
int var_4 = -626099519;
unsigned short var_5 = (unsigned short)56409;
long long int var_6 = -4922050522070642305LL;
int var_9 = 660269143;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)10494;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)198;
unsigned int var_14 = 722736569U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
