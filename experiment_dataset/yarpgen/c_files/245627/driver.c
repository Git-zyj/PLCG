#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34848;
_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)34594;
int zero = 0;
unsigned short var_15 = (unsigned short)26836;
short var_16 = (short)-30423;
unsigned short var_17 = (unsigned short)12080;
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
