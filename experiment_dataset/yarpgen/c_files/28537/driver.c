#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61549;
short var_4 = (short)21962;
short var_5 = (short)9675;
signed char var_11 = (signed char)123;
int var_12 = -1633909471;
short var_13 = (short)-17098;
signed char var_14 = (signed char)-99;
int zero = 0;
signed char var_17 = (signed char)-26;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
