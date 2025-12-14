#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 6732789938039333245ULL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)86;
short var_10 = (short)19165;
unsigned long long int var_11 = 10840263725760725526ULL;
short var_12 = (short)-2877;
signed char var_14 = (signed char)47;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2122909998U;
int zero = 0;
short var_19 = (short)-26024;
short var_20 = (short)-29928;
void init() {
}

void checksum() {
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
