#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34824;
short var_2 = (short)28465;
_Bool var_6 = (_Bool)0;
int var_8 = 390753256;
unsigned int var_10 = 3576541781U;
short var_15 = (short)6106;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)29035;
unsigned long long int var_19 = 16517408792893696149ULL;
short var_20 = (short)-15175;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
