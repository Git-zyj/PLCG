#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 5486909200814382712LL;
unsigned int var_3 = 2891999422U;
int var_7 = 476887302;
unsigned char var_8 = (unsigned char)140;
unsigned short var_10 = (unsigned short)22154;
long long int var_15 = -8712078928713025808LL;
int zero = 0;
short var_16 = (short)28148;
int var_17 = 725238696;
unsigned char var_18 = (unsigned char)76;
unsigned int var_19 = 3879034745U;
signed char var_20 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
