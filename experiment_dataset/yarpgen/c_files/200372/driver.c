#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-21940;
short var_2 = (short)23575;
int var_4 = 1837135864;
signed char var_5 = (signed char)-97;
int var_8 = 1252842044;
short var_12 = (short)-29180;
int var_14 = 1742791750;
unsigned long long int var_15 = 8821101560082021134ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)128;
unsigned char var_17 = (unsigned char)134;
signed char var_18 = (signed char)43;
int var_19 = 1171566048;
signed char var_20 = (signed char)-2;
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
