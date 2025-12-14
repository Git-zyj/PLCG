#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3930670061811421305LL;
signed char var_1 = (signed char)75;
_Bool var_2 = (_Bool)1;
unsigned char var_6 = (unsigned char)29;
unsigned int var_7 = 2064111586U;
int var_8 = -1733250666;
unsigned char var_9 = (unsigned char)90;
unsigned short var_10 = (unsigned short)37390;
int zero = 0;
unsigned int var_11 = 4033337963U;
long long int var_12 = 8826446855420099869LL;
int var_13 = -2130742279;
unsigned short var_14 = (unsigned short)28842;
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
