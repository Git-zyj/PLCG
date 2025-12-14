#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3737;
unsigned short var_2 = (unsigned short)2883;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-121;
unsigned long long int var_7 = 13390355543000401275ULL;
unsigned short var_8 = (unsigned short)39419;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-53;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)12080;
unsigned short var_16 = (unsigned short)21218;
unsigned short var_17 = (unsigned short)14085;
short var_18 = (short)-24907;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
