#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60099;
unsigned int var_1 = 4093304033U;
unsigned int var_2 = 2527934406U;
unsigned int var_3 = 1435629162U;
int var_4 = -81985711;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)8;
unsigned short var_8 = (unsigned short)58670;
int var_9 = 129107119;
unsigned short var_10 = (unsigned short)48008;
int zero = 0;
int var_11 = 316283507;
unsigned short var_12 = (unsigned short)24465;
unsigned short var_13 = (unsigned short)14173;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
