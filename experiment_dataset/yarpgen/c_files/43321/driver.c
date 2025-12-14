#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20538;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)3634;
unsigned short var_13 = (unsigned short)31022;
unsigned char var_14 = (unsigned char)153;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3937473877U;
unsigned long long int var_20 = 16164401502125128486ULL;
short var_21 = (short)-8726;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
