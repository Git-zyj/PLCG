#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2834020215354185358ULL;
signed char var_1 = (signed char)-78;
unsigned char var_2 = (unsigned char)246;
signed char var_3 = (signed char)47;
signed char var_4 = (signed char)123;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 10735662452446367590ULL;
unsigned int var_7 = 1597025259U;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
long long int var_11 = 3196095239151132399LL;
int zero = 0;
short var_13 = (short)-25043;
unsigned char var_14 = (unsigned char)111;
unsigned char var_15 = (unsigned char)215;
unsigned short var_16 = (unsigned short)53000;
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
