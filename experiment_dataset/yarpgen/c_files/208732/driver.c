#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
short var_1 = (short)-1220;
unsigned long long int var_3 = 1425071322886391913ULL;
unsigned char var_4 = (unsigned char)213;
unsigned int var_5 = 2704940459U;
short var_6 = (short)87;
unsigned long long int var_7 = 18031484941447037810ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)42020;
unsigned int var_12 = 3619953111U;
int zero = 0;
unsigned int var_13 = 2507203332U;
unsigned int var_14 = 3064288185U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
