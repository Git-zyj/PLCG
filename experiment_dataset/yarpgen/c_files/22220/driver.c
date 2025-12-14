#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11420;
short var_1 = (short)12373;
short var_2 = (short)19294;
short var_3 = (short)24333;
short var_4 = (short)25309;
short var_5 = (short)-17283;
short var_7 = (short)20556;
short var_8 = (short)-17811;
short var_9 = (short)19372;
short var_10 = (short)-2522;
short var_11 = (short)-17652;
int zero = 0;
short var_13 = (short)-23807;
short var_14 = (short)-27817;
short var_15 = (short)8861;
short var_16 = (short)10585;
short var_17 = (short)18668;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
