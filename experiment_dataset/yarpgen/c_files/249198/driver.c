#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30265;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-17500;
short var_14 = (short)10103;
short var_18 = (short)-22511;
unsigned long long int var_19 = 2043302878981571088ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)11028;
int var_21 = 851226737;
void init() {
}

void checksum() {
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
