#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5673;
int var_4 = 1630839043;
unsigned long long int var_5 = 1023055235519148179ULL;
long long int var_10 = -4795175029737808497LL;
unsigned int var_15 = 1024767003U;
int var_16 = 1669759911;
short var_19 = (short)3052;
int zero = 0;
unsigned long long int var_20 = 17794462809591112635ULL;
short var_21 = (short)-15394;
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
