#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2586;
unsigned char var_3 = (unsigned char)29;
long long int var_4 = 8995526629278147427LL;
unsigned int var_6 = 2079563915U;
unsigned short var_8 = (unsigned short)39020;
int var_9 = 1089878569;
unsigned short var_10 = (unsigned short)60790;
int zero = 0;
unsigned short var_14 = (unsigned short)22318;
signed char var_15 = (signed char)-108;
unsigned int var_16 = 1592602474U;
int var_17 = 172645046;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
