#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)175;
signed char var_4 = (signed char)-22;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-61;
_Bool var_7 = (_Bool)1;
long long int var_10 = 4287612212263948985LL;
short var_15 = (short)-25673;
signed char var_16 = (signed char)-14;
int zero = 0;
int var_17 = -292848685;
short var_18 = (short)-27831;
int var_19 = -1825212551;
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
