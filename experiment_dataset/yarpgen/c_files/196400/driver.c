#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23867;
int var_1 = 519831064;
unsigned char var_2 = (unsigned char)244;
short var_3 = (short)-19301;
unsigned long long int var_7 = 14483696839726209377ULL;
unsigned long long int var_9 = 3454158357716217764ULL;
unsigned char var_10 = (unsigned char)8;
unsigned long long int var_11 = 1539009918827673417ULL;
unsigned int var_13 = 2565241933U;
unsigned short var_14 = (unsigned short)4362;
unsigned short var_15 = (unsigned short)34848;
int var_16 = -340396838;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 5424137212678836942ULL;
short var_19 = (short)-30502;
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
