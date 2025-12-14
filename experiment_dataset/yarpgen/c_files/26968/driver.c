#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)-7583;
unsigned short var_3 = (unsigned short)15484;
unsigned long long int var_5 = 14599142272568418090ULL;
short var_7 = (short)2299;
unsigned long long int var_12 = 15223183685659330693ULL;
unsigned short var_13 = (unsigned short)61016;
int zero = 0;
short var_18 = (short)-298;
unsigned char var_19 = (unsigned char)213;
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
