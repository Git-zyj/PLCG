#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
unsigned int var_1 = 3315182072U;
unsigned short var_2 = (unsigned short)1822;
signed char var_4 = (signed char)-85;
short var_5 = (short)-14615;
short var_7 = (short)13096;
int zero = 0;
unsigned int var_15 = 1273955231U;
long long int var_16 = -4865307950533279831LL;
long long int var_17 = 3865886806987833644LL;
short var_18 = (short)2172;
unsigned char var_19 = (unsigned char)173;
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
