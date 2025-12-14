#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 913728824;
unsigned char var_1 = (unsigned char)167;
unsigned int var_3 = 1283299694U;
long long int var_11 = 5565272711928105647LL;
unsigned long long int var_13 = 3913486001758288364ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)51858;
unsigned short var_17 = (unsigned short)7828;
_Bool var_18 = (_Bool)1;
short var_19 = (short)4115;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
