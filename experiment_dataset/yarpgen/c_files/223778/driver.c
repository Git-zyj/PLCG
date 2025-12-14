#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13292;
unsigned short var_2 = (unsigned short)59504;
unsigned char var_4 = (unsigned char)77;
unsigned int var_6 = 935093418U;
short var_8 = (short)8030;
int var_13 = -1481291830;
unsigned short var_17 = (unsigned short)55632;
long long int var_18 = -232861996400837852LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = -1217353889;
int var_21 = 952990486;
short var_22 = (short)-1022;
_Bool var_23 = (_Bool)0;
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
