#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)88;
long long int var_6 = -1884126666936644699LL;
int var_7 = -1980703002;
unsigned short var_8 = (unsigned short)913;
unsigned short var_9 = (unsigned short)5954;
signed char var_14 = (signed char)73;
unsigned long long int var_18 = 914262287178640802ULL;
int zero = 0;
unsigned int var_19 = 1184018090U;
short var_20 = (short)-5321;
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
