#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1334901834;
signed char var_2 = (signed char)-60;
unsigned int var_3 = 70818242U;
unsigned long long int var_4 = 15470087754936655784ULL;
int var_5 = -307420223;
unsigned short var_7 = (unsigned short)36379;
unsigned short var_10 = (unsigned short)6329;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 3410714133196267682LL;
unsigned long long int var_15 = 4941558742876942316ULL;
unsigned int var_16 = 2399448218U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
