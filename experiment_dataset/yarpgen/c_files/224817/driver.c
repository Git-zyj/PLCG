#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1597629808;
unsigned long long int var_2 = 917519996842670784ULL;
int var_4 = 1938034420;
unsigned short var_7 = (unsigned short)34515;
signed char var_8 = (signed char)-6;
unsigned int var_11 = 631537057U;
int zero = 0;
short var_12 = (short)-11696;
int var_13 = 21616239;
long long int var_14 = -1639292487408512051LL;
unsigned long long int var_15 = 15021024372873138659ULL;
void init() {
}

void checksum() {
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
