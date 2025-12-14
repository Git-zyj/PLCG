#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16291360997340021676ULL;
short var_3 = (short)15548;
unsigned short var_5 = (unsigned short)25380;
unsigned long long int var_7 = 13886320808517232444ULL;
unsigned int var_8 = 2319006077U;
unsigned int var_9 = 3353060667U;
int var_12 = -67586791;
short var_14 = (short)-8598;
long long int var_16 = -7524124450682666520LL;
unsigned int var_17 = 1826262683U;
long long int var_18 = -1648375328383657230LL;
int var_19 = -606010205;
int zero = 0;
unsigned int var_20 = 3806820879U;
unsigned int var_21 = 3914702922U;
short var_22 = (short)-29785;
unsigned short var_23 = (unsigned short)3354;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
