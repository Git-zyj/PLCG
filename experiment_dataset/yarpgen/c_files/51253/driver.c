#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6385757066502002426LL;
long long int var_7 = -733706560337285841LL;
short var_11 = (short)-20183;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-20941;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)24438;
long long int var_18 = -119065145369496042LL;
unsigned long long int var_19 = 16688062507087144929ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
