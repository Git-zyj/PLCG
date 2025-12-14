#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3194294872U;
_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3391016163U;
unsigned short var_3 = (unsigned short)43558;
unsigned int var_4 = 4287960230U;
unsigned char var_5 = (unsigned char)134;
short var_6 = (short)6340;
short var_7 = (short)32207;
unsigned long long int var_9 = 16454652689885472572ULL;
unsigned short var_10 = (unsigned short)58149;
short var_11 = (short)-26758;
unsigned int var_13 = 1035851875U;
_Bool var_14 = (_Bool)1;
short var_15 = (short)25579;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3649091977U;
unsigned int var_18 = 2445917928U;
_Bool var_19 = (_Bool)0;
long long int var_20 = -5882101697268751185LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
