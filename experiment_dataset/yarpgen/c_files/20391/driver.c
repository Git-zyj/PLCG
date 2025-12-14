#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-23706;
short var_6 = (short)16513;
_Bool var_11 = (_Bool)0;
int var_14 = -1079694834;
unsigned int var_15 = 2484252208U;
unsigned int var_16 = 2627954389U;
int zero = 0;
unsigned long long int var_18 = 15227355509766672195ULL;
unsigned int var_19 = 129595487U;
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
