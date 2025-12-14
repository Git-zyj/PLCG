#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7988239452907367006LL;
signed char var_2 = (signed char)81;
long long int var_6 = -6519004596484038810LL;
unsigned char var_8 = (unsigned char)99;
_Bool var_10 = (_Bool)1;
unsigned char var_14 = (unsigned char)56;
int zero = 0;
unsigned short var_15 = (unsigned short)22953;
short var_16 = (short)5039;
long long int var_17 = 3469554673969309886LL;
unsigned char var_18 = (unsigned char)59;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
