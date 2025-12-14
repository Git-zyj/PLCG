#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 882560837U;
short var_5 = (short)1325;
unsigned int var_7 = 4087473837U;
short var_8 = (short)20347;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)44183;
short var_12 = (short)-8717;
unsigned short var_13 = (unsigned short)17434;
unsigned int var_14 = 4073836708U;
short var_15 = (short)-20698;
short var_16 = (short)-31057;
int zero = 0;
unsigned int var_19 = 3788389950U;
short var_20 = (short)20951;
short var_21 = (short)31195;
short var_22 = (short)22350;
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
