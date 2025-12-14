#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
unsigned char var_1 = (unsigned char)205;
int var_2 = 1570533539;
long long int var_6 = -2670351493897895041LL;
int var_8 = 617420976;
long long int var_9 = 1614753856413194321LL;
short var_10 = (short)-22176;
short var_11 = (short)17636;
unsigned char var_12 = (unsigned char)154;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)160;
int zero = 0;
signed char var_18 = (signed char)-86;
unsigned char var_19 = (unsigned char)232;
unsigned int var_20 = 3095920528U;
void init() {
}

void checksum() {
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
