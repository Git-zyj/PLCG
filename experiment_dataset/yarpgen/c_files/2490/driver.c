#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_5 = (short)-436;
unsigned short var_8 = (unsigned short)8308;
unsigned short var_11 = (unsigned short)24608;
long long int var_13 = 3197509574285999695LL;
int zero = 0;
short var_18 = (short)11422;
short var_19 = (short)-22233;
unsigned short var_20 = (unsigned short)9821;
short var_21 = (short)-6066;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
