#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7192;
unsigned long long int var_2 = 2449246902023926641ULL;
unsigned long long int var_3 = 17257162894119762109ULL;
short var_10 = (short)-8471;
unsigned long long int var_14 = 9623385462484735039ULL;
unsigned long long int var_15 = 9128245997061333223ULL;
short var_16 = (short)-7865;
int zero = 0;
short var_18 = (short)-23674;
short var_19 = (short)-19961;
void init() {
}

void checksum() {
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
