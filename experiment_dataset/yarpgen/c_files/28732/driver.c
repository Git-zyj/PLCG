#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3999419613U;
short var_2 = (short)-7902;
short var_4 = (short)-1456;
short var_7 = (short)-21890;
unsigned int var_10 = 1754694513U;
unsigned char var_11 = (unsigned char)59;
signed char var_17 = (signed char)-38;
int zero = 0;
unsigned int var_18 = 1995191112U;
signed char var_19 = (signed char)-32;
short var_20 = (short)26971;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
