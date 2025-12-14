#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7646549132182841470LL;
unsigned short var_2 = (unsigned short)47670;
unsigned int var_3 = 1463938064U;
unsigned int var_5 = 2700415337U;
unsigned char var_6 = (unsigned char)128;
unsigned char var_7 = (unsigned char)200;
_Bool var_8 = (_Bool)1;
int var_9 = -419308590;
int zero = 0;
long long int var_10 = -1922468716056747926LL;
unsigned short var_11 = (unsigned short)36506;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
