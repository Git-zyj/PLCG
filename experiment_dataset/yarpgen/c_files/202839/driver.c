#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)8281;
signed char var_4 = (signed char)-98;
_Bool var_6 = (_Bool)1;
int var_10 = -2015366337;
int zero = 0;
unsigned char var_11 = (unsigned char)51;
unsigned long long int var_12 = 12278515366149908111ULL;
signed char var_13 = (signed char)34;
short var_14 = (short)-22763;
unsigned short var_15 = (unsigned short)6363;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
