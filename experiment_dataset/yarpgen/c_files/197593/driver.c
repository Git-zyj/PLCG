#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)94;
unsigned short var_2 = (unsigned short)43686;
unsigned char var_3 = (unsigned char)137;
unsigned int var_5 = 760483114U;
unsigned short var_6 = (unsigned short)29045;
int var_7 = -209922210;
signed char var_10 = (signed char)-127;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-17887;
unsigned long long int var_14 = 8800232664805365986ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
