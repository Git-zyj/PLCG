#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1385088828;
long long int var_4 = 952235082224001082LL;
unsigned char var_5 = (unsigned char)199;
unsigned short var_7 = (unsigned short)4389;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)17496;
unsigned short var_14 = (unsigned short)11967;
short var_15 = (short)-23419;
_Bool var_16 = (_Bool)1;
long long int var_18 = 1496475917912717370LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1454862282;
int var_21 = -547546952;
int var_22 = 617546133;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
