#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 241712071;
unsigned int var_3 = 181651535U;
signed char var_4 = (signed char)101;
unsigned char var_8 = (unsigned char)25;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)21070;
long long int var_11 = -513796437280636572LL;
unsigned short var_12 = (unsigned short)8612;
int zero = 0;
unsigned char var_13 = (unsigned char)12;
short var_14 = (short)31757;
long long int var_15 = -3791135718086746184LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
