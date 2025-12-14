#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2070512487;
unsigned int var_1 = 2455733422U;
int var_3 = -480102073;
unsigned int var_5 = 2569625132U;
int var_7 = 1942124130;
signed char var_9 = (signed char)98;
unsigned int var_11 = 596414553U;
unsigned short var_13 = (unsigned short)7092;
unsigned int var_15 = 2475924043U;
signed char var_17 = (signed char)113;
int zero = 0;
unsigned long long int var_19 = 2441187733436382091ULL;
short var_20 = (short)26153;
int var_21 = 1443763865;
long long int var_22 = -2160461215790588596LL;
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
