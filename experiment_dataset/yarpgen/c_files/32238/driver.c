#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12166;
unsigned char var_2 = (unsigned char)218;
_Bool var_4 = (_Bool)1;
int var_5 = 1478639719;
short var_6 = (short)11902;
unsigned int var_7 = 334296350U;
short var_9 = (short)-26146;
unsigned int var_10 = 1267264402U;
unsigned int var_11 = 81857804U;
unsigned int var_12 = 60961697U;
unsigned int var_13 = 358105267U;
int var_14 = 1653106521;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2554703132U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2129531741U;
unsigned char var_20 = (unsigned char)129;
unsigned short var_21 = (unsigned short)13159;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
