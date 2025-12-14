#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13698;
long long int var_5 = 7098061374690300510LL;
signed char var_6 = (signed char)-52;
unsigned long long int var_7 = 10912340804923063020ULL;
long long int var_8 = 8519071590006254321LL;
long long int var_9 = 8406244534325333236LL;
unsigned char var_10 = (unsigned char)27;
short var_11 = (short)28840;
signed char var_12 = (signed char)-13;
signed char var_16 = (signed char)-75;
unsigned long long int var_17 = 1385806529384076743ULL;
int zero = 0;
long long int var_20 = -1450396948673024897LL;
unsigned short var_21 = (unsigned short)11819;
unsigned short var_22 = (unsigned short)55695;
void init() {
}

void checksum() {
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
