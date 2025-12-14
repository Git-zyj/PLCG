#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2465048215U;
signed char var_1 = (signed char)-23;
signed char var_2 = (signed char)-21;
unsigned long long int var_3 = 2671744433568402155ULL;
unsigned long long int var_4 = 5166518434846091171ULL;
unsigned char var_5 = (unsigned char)112;
signed char var_7 = (signed char)87;
int var_8 = -957911452;
unsigned char var_9 = (unsigned char)166;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-22;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3338962307U;
unsigned int var_14 = 923330198U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
