#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)9581;
short var_7 = (short)12860;
short var_12 = (short)27703;
short var_13 = (short)-12490;
int zero = 0;
short var_20 = (short)22205;
short var_21 = (short)6467;
short var_22 = (short)30855;
short var_23 = (short)-14559;
void init() {
}

void checksum() {
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
