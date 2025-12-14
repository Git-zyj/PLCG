#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1201450642;
short var_3 = (short)-31507;
unsigned short var_11 = (unsigned short)45146;
unsigned int var_12 = 1962136594U;
_Bool var_13 = (_Bool)0;
unsigned int var_16 = 44535158U;
signed char var_17 = (signed char)97;
signed char var_18 = (signed char)75;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 4650874072565143454LL;
void init() {
}

void checksum() {
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
