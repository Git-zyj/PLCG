#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)73;
unsigned long long int var_3 = 4008824822928729311ULL;
unsigned int var_4 = 1508768674U;
signed char var_5 = (signed char)42;
short var_6 = (short)-23167;
_Bool var_7 = (_Bool)0;
int zero = 0;
long long int var_10 = 3886521969381820404LL;
unsigned char var_11 = (unsigned char)232;
unsigned int var_12 = 1717567598U;
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
