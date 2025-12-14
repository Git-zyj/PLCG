#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65072;
short var_1 = (short)22827;
unsigned long long int var_2 = 9601440134891011929ULL;
int var_3 = -1930085322;
unsigned long long int var_6 = 7857225113940818667ULL;
unsigned char var_8 = (unsigned char)179;
unsigned char var_9 = (unsigned char)243;
signed char var_10 = (signed char)-122;
long long int var_11 = -5600093410587958754LL;
int var_13 = -2052847256;
unsigned short var_14 = (unsigned short)39488;
int zero = 0;
unsigned long long int var_15 = 9820514732397596530ULL;
short var_16 = (short)-16677;
unsigned int var_17 = 4254010230U;
signed char var_18 = (signed char)39;
long long int var_19 = 1856035025277139230LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
