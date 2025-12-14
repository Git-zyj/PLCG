#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -761357223;
long long int var_3 = 4928980361059650335LL;
unsigned char var_4 = (unsigned char)122;
unsigned char var_5 = (unsigned char)225;
short var_6 = (short)11070;
short var_7 = (short)18524;
short var_8 = (short)-16819;
signed char var_9 = (signed char)17;
unsigned char var_10 = (unsigned char)224;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-50;
unsigned char var_13 = (unsigned char)78;
unsigned char var_14 = (unsigned char)193;
unsigned short var_15 = (unsigned short)29762;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
