#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1421141047877987558LL;
int var_3 = -1465428392;
int var_5 = 1736658209;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)17255;
int var_12 = -802390122;
short var_14 = (short)31660;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)44715;
unsigned char var_19 = (unsigned char)244;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
