#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3553468358U;
unsigned short var_1 = (unsigned short)23874;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)7;
int var_7 = -329280625;
unsigned short var_8 = (unsigned short)19886;
int var_11 = -1180830167;
short var_12 = (short)-8004;
signed char var_13 = (signed char)95;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 2522638550U;
int var_17 = -1976764346;
int var_18 = -1993695326;
int var_19 = -1551715313;
unsigned char var_20 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
