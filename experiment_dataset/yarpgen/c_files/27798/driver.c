#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45876;
short var_2 = (short)-26455;
int var_5 = -1356204195;
_Bool var_7 = (_Bool)0;
unsigned int var_13 = 1901591379U;
signed char var_14 = (signed char)-108;
signed char var_15 = (signed char)-16;
int zero = 0;
unsigned short var_16 = (unsigned short)54442;
signed char var_17 = (signed char)5;
long long int var_18 = 2690295896543290995LL;
unsigned short var_19 = (unsigned short)35488;
void init() {
}

void checksum() {
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
