#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2560192710U;
unsigned short var_5 = (unsigned short)3775;
unsigned short var_9 = (unsigned short)28005;
long long int var_12 = 6829855082154013761LL;
int zero = 0;
unsigned long long int var_13 = 4847405510690506675ULL;
unsigned short var_14 = (unsigned short)45662;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)12915;
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
