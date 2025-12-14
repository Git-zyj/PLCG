#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4441694092269187763ULL;
unsigned int var_2 = 700601646U;
signed char var_10 = (signed char)80;
long long int var_11 = 7539676117828670129LL;
unsigned long long int var_12 = 3392053656165173594ULL;
signed char var_13 = (signed char)-122;
signed char var_16 = (signed char)115;
long long int var_17 = 8222975286493770357LL;
int zero = 0;
int var_20 = -1877872357;
unsigned int var_21 = 313978999U;
long long int var_22 = 348335733283168611LL;
unsigned short var_23 = (unsigned short)32945;
long long int var_24 = -153900461666449654LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
