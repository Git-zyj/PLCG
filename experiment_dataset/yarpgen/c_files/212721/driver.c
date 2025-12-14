#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 617678695;
_Bool var_8 = (_Bool)0;
unsigned char var_12 = (unsigned char)34;
int var_14 = 1133969498;
unsigned long long int var_15 = 5251368246516608870ULL;
int zero = 0;
short var_16 = (short)15485;
unsigned int var_17 = 3966563507U;
unsigned char var_18 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
