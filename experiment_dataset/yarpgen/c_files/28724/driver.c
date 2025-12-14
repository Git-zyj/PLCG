#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 349717468U;
long long int var_1 = 8155678739764854927LL;
unsigned char var_2 = (unsigned char)50;
int var_4 = 62436732;
short var_7 = (short)24651;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)238;
int var_11 = -834281206;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_13 = -2187357479764023482LL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)42;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-8803;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
