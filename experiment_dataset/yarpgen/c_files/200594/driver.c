#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)75;
signed char var_4 = (signed char)26;
unsigned char var_5 = (unsigned char)58;
unsigned short var_6 = (unsigned short)53906;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-95;
int var_12 = 1793779889;
signed char var_14 = (signed char)73;
int var_16 = 1710889029;
int zero = 0;
unsigned long long int var_18 = 2336387720651510190ULL;
long long int var_19 = -3815776744567851587LL;
unsigned short var_20 = (unsigned short)12041;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
