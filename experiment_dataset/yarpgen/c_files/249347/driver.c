#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4295930833070411729LL;
short var_2 = (short)19140;
unsigned short var_3 = (unsigned short)44127;
short var_7 = (short)542;
unsigned short var_8 = (unsigned short)18070;
unsigned int var_13 = 424990105U;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = -823668392;
signed char var_16 = (signed char)-62;
signed char var_17 = (signed char)18;
unsigned short var_18 = (unsigned short)47737;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
