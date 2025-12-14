#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1549440892;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)93;
unsigned int var_3 = 1756743427U;
short var_4 = (short)-20292;
long long int var_6 = -4168129899832053438LL;
unsigned short var_10 = (unsigned short)61159;
unsigned int var_11 = 3596917244U;
signed char var_14 = (signed char)-90;
signed char var_16 = (signed char)99;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_19 = 964466207;
signed char var_20 = (signed char)-56;
int var_21 = 1488926449;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
