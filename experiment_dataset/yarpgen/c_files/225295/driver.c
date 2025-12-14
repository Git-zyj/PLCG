#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
short var_1 = (short)-9554;
unsigned short var_2 = (unsigned short)5864;
long long int var_3 = -3061143728024657186LL;
unsigned int var_4 = 2337295347U;
long long int var_5 = -6227612925843967227LL;
signed char var_6 = (signed char)24;
unsigned int var_7 = 3843164314U;
unsigned int var_8 = 588720059U;
int var_9 = -1912321023;
unsigned int var_10 = 3015031192U;
unsigned int var_11 = 3873381497U;
unsigned short var_12 = (unsigned short)61903;
int zero = 0;
unsigned char var_13 = (unsigned char)27;
unsigned char var_14 = (unsigned char)127;
unsigned int var_15 = 2128437237U;
signed char var_16 = (signed char)-66;
signed char var_17 = (signed char)-27;
unsigned short var_18 = (unsigned short)58256;
short var_19 = (short)-30554;
unsigned char var_20 = (unsigned char)165;
unsigned char var_21 = (unsigned char)11;
short var_22 = (short)-9922;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
