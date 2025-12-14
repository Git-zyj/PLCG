#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)4346;
unsigned long long int var_3 = 16124760152045160790ULL;
int var_4 = 275087541;
_Bool var_7 = (_Bool)1;
int var_9 = 1963957821;
unsigned short var_10 = (unsigned short)44142;
unsigned short var_12 = (unsigned short)46903;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)12491;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 10573886789093725908ULL;
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
