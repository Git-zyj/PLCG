#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 18277505459929808544ULL;
long long int var_2 = -990383090059843014LL;
unsigned long long int var_4 = 13010082411853957079ULL;
long long int var_5 = 8085042808566938489LL;
unsigned long long int var_6 = 4394102703535725974ULL;
unsigned short var_7 = (unsigned short)28492;
int zero = 0;
signed char var_10 = (signed char)67;
unsigned short var_11 = (unsigned short)65097;
unsigned short var_12 = (unsigned short)21636;
long long int var_13 = -3189897932869095814LL;
unsigned long long int var_14 = 2038633265553085011ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
