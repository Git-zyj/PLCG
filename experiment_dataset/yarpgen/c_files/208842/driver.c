#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8206452899946085792ULL;
signed char var_4 = (signed char)45;
short var_5 = (short)-8543;
unsigned short var_8 = (unsigned short)781;
unsigned int var_9 = 2528160634U;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)2602;
int zero = 0;
unsigned short var_14 = (unsigned short)17767;
unsigned long long int var_15 = 11704692176754949202ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 8800278468853726276ULL;
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
