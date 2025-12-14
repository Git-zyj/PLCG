#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60009;
long long int var_2 = 730312398701480749LL;
int var_3 = -1254988357;
_Bool var_8 = (_Bool)0;
long long int var_12 = 3560094218588337399LL;
unsigned long long int var_13 = 17146026204689124338ULL;
short var_14 = (short)-14945;
long long int var_15 = -9023159867097805091LL;
int zero = 0;
int var_16 = -1513207690;
unsigned short var_17 = (unsigned short)34242;
unsigned short var_18 = (unsigned short)4603;
void init() {
}

void checksum() {
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
