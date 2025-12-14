#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -836993925;
int var_4 = 830000147;
int var_5 = -611723859;
int var_8 = -666075551;
int var_9 = -855726562;
int var_12 = 71891470;
int var_13 = 90879295;
int var_17 = 952282360;
int zero = 0;
int var_20 = 323499879;
int var_21 = -352606071;
int var_22 = -743147838;
int var_23 = -2051537285;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
