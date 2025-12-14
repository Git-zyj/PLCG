#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1572586197;
int var_1 = 1669425772;
int var_2 = 1120796969;
unsigned char var_3 = (unsigned char)243;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)8968;
unsigned char var_8 = (unsigned char)146;
long long int var_10 = -8702832340424381298LL;
signed char var_11 = (signed char)0;
unsigned char var_12 = (unsigned char)250;
unsigned char var_13 = (unsigned char)114;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_16 = (short)30820;
unsigned char var_17 = (unsigned char)224;
long long int var_18 = 9030328504343663797LL;
unsigned char var_19 = (unsigned char)220;
unsigned short var_20 = (unsigned short)8808;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
