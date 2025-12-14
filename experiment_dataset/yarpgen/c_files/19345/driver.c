#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
short var_4 = (short)-15527;
unsigned char var_5 = (unsigned char)10;
unsigned char var_6 = (unsigned char)64;
int var_7 = 1771591251;
short var_8 = (short)43;
_Bool var_9 = (_Bool)1;
long long int var_10 = -3191654471875857866LL;
long long int var_11 = -5182397003301754361LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-105;
unsigned int var_14 = 1759077112U;
unsigned int var_15 = 3608734417U;
void init() {
}

void checksum() {
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
