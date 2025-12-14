#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)107;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1806948651U;
int var_4 = -1121220927;
long long int var_5 = -4039855831781663821LL;
unsigned int var_6 = 1823812919U;
unsigned char var_8 = (unsigned char)213;
unsigned long long int var_12 = 4335371775480957995ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)135;
void init() {
}

void checksum() {
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
