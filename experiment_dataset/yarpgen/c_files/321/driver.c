#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)117;
long long int var_13 = -6362449731933496467LL;
short var_14 = (short)-22103;
int zero = 0;
unsigned long long int var_15 = 4942763448478756187ULL;
_Bool var_16 = (_Bool)1;
long long int var_17 = 1769424045534457300LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
