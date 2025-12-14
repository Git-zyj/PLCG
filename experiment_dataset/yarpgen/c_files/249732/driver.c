#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24088;
unsigned short var_1 = (unsigned short)38984;
unsigned short var_2 = (unsigned short)3816;
short var_3 = (short)-16178;
int var_5 = 562012983;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)77;
unsigned short var_8 = (unsigned short)45639;
short var_9 = (short)20831;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)207;
long long int var_13 = -6527838358799292216LL;
int var_14 = 2102434328;
_Bool var_15 = (_Bool)0;
int var_16 = 1711518448;
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
