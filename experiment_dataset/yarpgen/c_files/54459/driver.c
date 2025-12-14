#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59436;
long long int var_1 = 380766548246056665LL;
signed char var_3 = (signed char)86;
short var_5 = (short)822;
unsigned char var_6 = (unsigned char)253;
unsigned short var_7 = (unsigned short)62602;
unsigned short var_8 = (unsigned short)36082;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 4065044849280980978ULL;
int zero = 0;
signed char var_13 = (signed char)-118;
short var_14 = (short)27707;
long long int var_15 = -3794811972535347004LL;
unsigned int var_16 = 2084882777U;
unsigned short var_17 = (unsigned short)18993;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
