#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 225080350;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)45663;
unsigned int var_18 = 1991103560U;
int zero = 0;
unsigned short var_19 = (unsigned short)43562;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2028416445U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
