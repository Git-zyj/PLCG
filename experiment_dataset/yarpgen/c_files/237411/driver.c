#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1470753570;
int var_2 = 1457058473;
unsigned long long int var_8 = 1880475536477316846ULL;
unsigned int var_9 = 4020286891U;
short var_11 = (short)25317;
unsigned short var_12 = (unsigned short)19534;
long long int var_14 = 31948573345082455LL;
int var_17 = -142504054;
unsigned long long int var_18 = 9270108884029038123ULL;
int zero = 0;
signed char var_19 = (signed char)115;
unsigned long long int var_20 = 10312161796170873150ULL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
