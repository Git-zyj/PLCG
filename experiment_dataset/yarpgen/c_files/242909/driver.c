#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11089550357443677752ULL;
unsigned short var_2 = (unsigned short)42951;
unsigned short var_6 = (unsigned short)2204;
unsigned long long int var_7 = 14780876558851304666ULL;
unsigned long long int var_9 = 8030244305206284406ULL;
unsigned long long int var_11 = 1779941145087778071ULL;
unsigned short var_14 = (unsigned short)8504;
unsigned short var_15 = (unsigned short)11549;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_18 = (short)-31022;
short var_19 = (short)-17220;
int var_20 = -1812483877;
unsigned short var_21 = (unsigned short)54243;
unsigned char var_22 = (unsigned char)29;
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
