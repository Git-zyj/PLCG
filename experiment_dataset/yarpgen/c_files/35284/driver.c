#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-1780;
unsigned short var_5 = (unsigned short)65387;
unsigned short var_6 = (unsigned short)51703;
unsigned int var_9 = 1478480544U;
int var_10 = -34240421;
_Bool var_11 = (_Bool)0;
long long int var_12 = -1120636725681020816LL;
short var_14 = (short)18917;
short var_16 = (short)9407;
unsigned short var_19 = (unsigned short)53602;
int zero = 0;
short var_20 = (short)18739;
unsigned short var_21 = (unsigned short)392;
unsigned short var_22 = (unsigned short)7953;
unsigned short var_23 = (unsigned short)51228;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
