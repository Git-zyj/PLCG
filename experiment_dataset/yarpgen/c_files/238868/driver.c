#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 276720198;
unsigned int var_3 = 1703688836U;
int var_5 = -1157273302;
unsigned short var_6 = (unsigned short)60987;
short var_9 = (short)11232;
int zero = 0;
unsigned int var_11 = 1302270193U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1742198413U;
unsigned int var_14 = 1434375917U;
short var_15 = (short)11282;
short var_16 = (short)-14479;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
