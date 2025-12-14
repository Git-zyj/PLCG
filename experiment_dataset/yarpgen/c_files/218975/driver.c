#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2152939175U;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 6657547043253006529ULL;
long long int var_11 = -2217920662594987398LL;
unsigned short var_12 = (unsigned short)17578;
int var_16 = -1481360096;
int zero = 0;
unsigned long long int var_17 = 5426040718543995122ULL;
short var_18 = (short)-29377;
unsigned char var_19 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
