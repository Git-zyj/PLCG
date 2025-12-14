#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_4 = (short)27996;
short var_6 = (short)12562;
int var_7 = -838975371;
short var_8 = (short)3706;
int var_14 = 165297966;
short var_15 = (short)-10178;
int zero = 0;
unsigned short var_16 = (unsigned short)58230;
unsigned char var_17 = (unsigned char)213;
signed char var_18 = (signed char)79;
short var_19 = (short)7447;
unsigned short var_20 = (unsigned short)64504;
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
