#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 368619529U;
signed char var_1 = (signed char)21;
unsigned int var_2 = 2456960856U;
long long int var_4 = -2292277811025419280LL;
long long int var_5 = 3080018239088497298LL;
unsigned int var_6 = 4142260993U;
unsigned int var_7 = 3345272559U;
int var_8 = 2135814494;
int zero = 0;
unsigned int var_10 = 3150076272U;
int var_11 = 793641984;
unsigned short var_12 = (unsigned short)63254;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
