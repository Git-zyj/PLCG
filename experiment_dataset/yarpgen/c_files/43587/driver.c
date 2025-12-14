#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6175;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
short var_5 = (short)4415;
short var_6 = (short)29530;
unsigned long long int var_7 = 11467201603004040619ULL;
short var_10 = (short)15920;
_Bool var_13 = (_Bool)0;
long long int var_14 = 5024410615076767123LL;
unsigned char var_18 = (unsigned char)100;
int zero = 0;
signed char var_20 = (signed char)-68;
signed char var_21 = (signed char)73;
long long int var_22 = -9071765794141482927LL;
unsigned short var_23 = (unsigned short)2470;
short var_24 = (short)19964;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
