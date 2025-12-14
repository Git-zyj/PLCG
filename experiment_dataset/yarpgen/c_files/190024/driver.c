#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11584;
unsigned int var_1 = 2007766404U;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)24974;
short var_5 = (short)-22591;
int var_8 = 1146736137;
unsigned long long int var_9 = 12521202812424631222ULL;
signed char var_10 = (signed char)106;
int zero = 0;
unsigned short var_11 = (unsigned short)74;
unsigned short var_12 = (unsigned short)2246;
short var_13 = (short)506;
unsigned long long int var_14 = 3620599513344718405ULL;
unsigned int var_15 = 1874397294U;
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
