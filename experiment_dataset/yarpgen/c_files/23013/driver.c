#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1288005032;
signed char var_2 = (signed char)-123;
unsigned int var_3 = 2150904034U;
unsigned int var_6 = 2534237350U;
short var_7 = (short)25016;
_Bool var_8 = (_Bool)0;
long long int var_9 = 2390404762961609080LL;
int var_10 = -1116529390;
unsigned int var_11 = 1553189902U;
int zero = 0;
unsigned int var_15 = 2485723502U;
unsigned short var_16 = (unsigned short)18453;
int var_17 = 1345720385;
unsigned int var_18 = 2554397242U;
int var_19 = 1132859016;
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
