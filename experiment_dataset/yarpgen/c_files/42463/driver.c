#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26082;
_Bool var_1 = (_Bool)0;
unsigned char var_8 = (unsigned char)176;
short var_11 = (short)-3429;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_19 = (short)-10675;
long long int var_20 = 6787007390366915256LL;
unsigned char var_21 = (unsigned char)176;
unsigned char var_22 = (unsigned char)52;
long long int var_23 = -3627180995851267968LL;
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
