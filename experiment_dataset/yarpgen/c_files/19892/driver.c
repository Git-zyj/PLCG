#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)190;
signed char var_2 = (signed char)126;
long long int var_3 = -8346243720156606600LL;
int var_4 = 992401846;
int var_6 = -285437011;
unsigned short var_7 = (unsigned short)17388;
short var_10 = (short)-18663;
_Bool var_11 = (_Bool)1;
_Bool var_13 = (_Bool)1;
short var_14 = (short)31743;
int zero = 0;
unsigned char var_16 = (unsigned char)42;
unsigned int var_17 = 2926611421U;
unsigned int var_18 = 2444772238U;
int var_19 = 46143619;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
