#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)73;
_Bool var_2 = (_Bool)0;
int var_4 = -65198673;
signed char var_8 = (signed char)91;
short var_12 = (short)-25586;
signed char var_14 = (signed char)65;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 1302207502058179510ULL;
unsigned char var_20 = (unsigned char)201;
void init() {
}

void checksum() {
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
