#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 681181088;
unsigned int var_1 = 2423322669U;
long long int var_2 = 8515711564154368211LL;
unsigned short var_3 = (unsigned short)32353;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-30589;
short var_8 = (short)-4524;
short var_9 = (short)-20811;
signed char var_10 = (signed char)-22;
int zero = 0;
short var_11 = (short)-6769;
signed char var_12 = (signed char)-21;
long long int var_13 = 7921976283056473962LL;
signed char var_14 = (signed char)-105;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
