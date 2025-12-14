#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2113307252881282711ULL;
unsigned short var_7 = (unsigned short)42774;
unsigned long long int var_10 = 1103033577365178449ULL;
short var_11 = (short)-11033;
int zero = 0;
signed char var_12 = (signed char)110;
unsigned long long int var_13 = 5367965162101827586ULL;
_Bool var_14 = (_Bool)1;
int var_15 = 2073728464;
signed char var_16 = (signed char)-90;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
