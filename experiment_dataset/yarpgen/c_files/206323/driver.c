#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 2319217673204370366ULL;
unsigned short var_2 = (unsigned short)32342;
short var_4 = (short)-5599;
int var_5 = 1164347917;
unsigned long long int var_6 = 9574648724996722027ULL;
long long int var_7 = -4475798294724719444LL;
unsigned long long int var_8 = 10798056288090533914ULL;
long long int var_9 = -2299083642883804495LL;
unsigned char var_10 = (unsigned char)241;
int zero = 0;
short var_11 = (short)-17512;
unsigned long long int var_12 = 6160369109869015816ULL;
unsigned int var_13 = 1144100057U;
unsigned char var_14 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
