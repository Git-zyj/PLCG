#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)203;
unsigned int var_1 = 3263081077U;
_Bool var_2 = (_Bool)1;
long long int var_4 = -6384608003044524142LL;
int var_5 = 1710487033;
unsigned long long int var_6 = 1275661354079052331ULL;
short var_7 = (short)-1969;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 193525264898676045ULL;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-52;
unsigned int var_13 = 4002471432U;
unsigned short var_14 = (unsigned short)31947;
int zero = 0;
short var_15 = (short)25606;
signed char var_16 = (signed char)94;
void init() {
}

void checksum() {
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
