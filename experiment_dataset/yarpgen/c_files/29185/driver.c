#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)5562;
short var_3 = (short)3133;
unsigned short var_5 = (unsigned short)64769;
int var_9 = 582273336;
signed char var_10 = (signed char)28;
signed char var_11 = (signed char)-94;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1669374400U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 235961917U;
int var_16 = -1513797861;
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
