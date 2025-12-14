#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10425;
unsigned short var_1 = (unsigned short)48257;
unsigned short var_4 = (unsigned short)21170;
long long int var_5 = 4551160779562891073LL;
long long int var_6 = 7750065729148212017LL;
long long int var_7 = 8881217962243599658LL;
unsigned short var_8 = (unsigned short)26536;
unsigned short var_12 = (unsigned short)41981;
int zero = 0;
long long int var_13 = 6197128820265522990LL;
long long int var_14 = -2677019922308250414LL;
unsigned short var_15 = (unsigned short)40073;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
