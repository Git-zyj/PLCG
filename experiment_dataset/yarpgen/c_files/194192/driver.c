#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 463242748U;
short var_3 = (short)24625;
_Bool var_5 = (_Bool)1;
unsigned int var_10 = 2278277544U;
unsigned short var_11 = (unsigned short)54825;
_Bool var_12 = (_Bool)0;
short var_13 = (short)14881;
unsigned int var_15 = 3891604085U;
int zero = 0;
unsigned int var_18 = 2587780067U;
short var_19 = (short)24408;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)17509;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
