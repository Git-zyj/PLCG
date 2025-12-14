#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20702;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 1296460015357389452ULL;
long long int var_11 = -421783540011833493LL;
short var_12 = (short)-17181;
int zero = 0;
short var_16 = (short)-20120;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
