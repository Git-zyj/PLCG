#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23092;
unsigned int var_3 = 849234117U;
unsigned long long int var_4 = 18365113487853533018ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 14451067327272125198ULL;
int zero = 0;
unsigned long long int var_15 = 13415884079800317454ULL;
unsigned short var_16 = (unsigned short)56452;
unsigned int var_17 = 3762543594U;
unsigned short var_18 = (unsigned short)64709;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
