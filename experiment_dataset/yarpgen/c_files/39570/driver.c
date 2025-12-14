#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_6 = -645101280;
short var_7 = (short)2402;
unsigned int var_10 = 563379068U;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-3169;
unsigned short var_15 = (unsigned short)34572;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-597;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
