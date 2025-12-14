#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22344;
signed char var_1 = (signed char)94;
unsigned short var_3 = (unsigned short)32247;
unsigned int var_5 = 497390714U;
unsigned int var_8 = 2640527033U;
unsigned long long int var_9 = 18373178569465348946ULL;
unsigned int var_10 = 116911443U;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)71;
int zero = 0;
unsigned char var_13 = (unsigned char)224;
int var_14 = 1809640215;
_Bool var_15 = (_Bool)0;
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
