#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21863;
_Bool var_5 = (_Bool)1;
unsigned char var_10 = (unsigned char)197;
long long int var_11 = -5419114985872898467LL;
int zero = 0;
int var_13 = 419787925;
short var_14 = (short)-19373;
unsigned char var_15 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
