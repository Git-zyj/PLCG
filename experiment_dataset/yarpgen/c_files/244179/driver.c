#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_7 = (short)-2661;
long long int var_8 = -6295718187443095676LL;
unsigned short var_10 = (unsigned short)39611;
int zero = 0;
unsigned int var_14 = 3332892804U;
unsigned int var_15 = 2123279198U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
