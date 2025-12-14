#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19592;
short var_2 = (short)-11691;
short var_3 = (short)-14868;
signed char var_4 = (signed char)12;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-7948;
long long int var_7 = -5913819643431301302LL;
short var_8 = (short)-21450;
short var_9 = (short)20847;
int zero = 0;
int var_11 = 153305340;
signed char var_12 = (signed char)-25;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
