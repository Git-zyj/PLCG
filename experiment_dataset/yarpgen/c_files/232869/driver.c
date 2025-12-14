#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12611;
short var_2 = (short)20895;
signed char var_3 = (signed char)58;
unsigned short var_6 = (unsigned short)62782;
short var_9 = (short)-6690;
unsigned long long int var_13 = 17200160695363304833ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)93;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
