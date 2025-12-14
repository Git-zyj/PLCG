#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)26886;
short var_12 = (short)17429;
unsigned short var_14 = (unsigned short)21371;
unsigned int var_15 = 1202554653U;
int zero = 0;
short var_18 = (short)-16238;
_Bool var_19 = (_Bool)1;
long long int var_20 = 5142857479964551777LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
