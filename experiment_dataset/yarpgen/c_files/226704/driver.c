#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-87;
short var_2 = (short)26464;
long long int var_3 = 4677170601606176334LL;
int var_5 = 1802001023;
unsigned long long int var_7 = 11903480951631860394ULL;
unsigned long long int var_8 = 2163214110360764714ULL;
unsigned short var_13 = (unsigned short)56451;
unsigned long long int var_16 = 6059331732283817682ULL;
short var_17 = (short)-15422;
long long int var_18 = 2337490380894076650LL;
int zero = 0;
unsigned long long int var_20 = 10747469091254239319ULL;
int var_21 = 1830949349;
unsigned long long int var_22 = 11799273629435315412ULL;
unsigned int var_23 = 1707839717U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
