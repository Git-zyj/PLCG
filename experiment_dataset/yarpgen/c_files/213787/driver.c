#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43745;
unsigned char var_2 = (unsigned char)144;
unsigned int var_6 = 204311161U;
short var_12 = (short)58;
short var_14 = (short)-13503;
unsigned int var_16 = 2855968079U;
int var_19 = -1012057551;
int zero = 0;
signed char var_20 = (signed char)-114;
unsigned int var_21 = 2960636065U;
unsigned short var_22 = (unsigned short)51554;
void init() {
}

void checksum() {
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
