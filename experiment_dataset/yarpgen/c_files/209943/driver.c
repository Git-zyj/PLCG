#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -480068293;
unsigned int var_1 = 4195360419U;
int var_3 = -63544455;
int var_4 = -369233676;
short var_5 = (short)-7028;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)5515;
long long int var_8 = -8794928826955892929LL;
signed char var_12 = (signed char)-113;
signed char var_13 = (signed char)120;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-95;
unsigned int var_16 = 648562682U;
void init() {
}

void checksum() {
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
