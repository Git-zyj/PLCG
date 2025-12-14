#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52048;
unsigned short var_3 = (unsigned short)33068;
signed char var_9 = (signed char)9;
unsigned short var_13 = (unsigned short)12341;
unsigned long long int var_14 = 12237534005931293063ULL;
unsigned long long int var_15 = 12004641707817362313ULL;
int zero = 0;
short var_18 = (short)-30772;
unsigned short var_19 = (unsigned short)806;
_Bool var_20 = (_Bool)1;
long long int var_21 = 7682367704291351974LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
