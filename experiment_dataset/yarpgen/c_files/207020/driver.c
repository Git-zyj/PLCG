#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
long long int var_2 = 75947816325239099LL;
short var_3 = (short)-32062;
short var_5 = (short)26801;
unsigned long long int var_6 = 10053493954881358480ULL;
long long int var_8 = 2553192934822706271LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_10 = (short)-14691;
unsigned short var_11 = (unsigned short)59040;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
