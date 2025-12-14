#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_4 = 1727413340;
unsigned int var_5 = 259215300U;
unsigned short var_6 = (unsigned short)47743;
int var_7 = 1014252243;
unsigned short var_8 = (unsigned short)60242;
long long int var_10 = 1930783704550365362LL;
unsigned int var_11 = 769304060U;
int zero = 0;
int var_14 = 235067400;
signed char var_15 = (signed char)71;
short var_16 = (short)28418;
signed char var_17 = (signed char)-44;
unsigned short var_18 = (unsigned short)49014;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
