#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12364;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)191;
short var_7 = (short)-13261;
unsigned char var_8 = (unsigned char)242;
unsigned char var_9 = (unsigned char)76;
short var_10 = (short)-24499;
short var_11 = (short)-28899;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3394504900U;
long long int var_15 = 1782894253011157303LL;
unsigned char var_16 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
