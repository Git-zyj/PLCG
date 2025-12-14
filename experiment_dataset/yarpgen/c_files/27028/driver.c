#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 238741276;
signed char var_3 = (signed char)65;
unsigned short var_5 = (unsigned short)30783;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-12058;
long long int var_10 = -1612207972412653473LL;
long long int var_13 = 6908416375361549446LL;
long long int var_14 = 9001759738428459629LL;
short var_16 = (short)-6411;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 906797585U;
int zero = 0;
unsigned short var_19 = (unsigned short)9728;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)35671;
unsigned long long int var_22 = 5547145931479639623ULL;
signed char var_23 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
