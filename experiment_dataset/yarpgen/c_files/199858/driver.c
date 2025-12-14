#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2349100631U;
short var_3 = (short)8115;
unsigned long long int var_4 = 2286630162133215621ULL;
_Bool var_9 = (_Bool)0;
int var_15 = 1159346230;
int var_17 = 1292121268;
short var_18 = (short)32274;
int zero = 0;
short var_19 = (short)8811;
int var_20 = -95582953;
unsigned int var_21 = 1120825282U;
unsigned int var_22 = 3466695940U;
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
