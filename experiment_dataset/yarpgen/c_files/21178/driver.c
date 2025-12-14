#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1449805167812679238LL;
unsigned int var_6 = 3919319161U;
unsigned long long int var_8 = 11530925368277875933ULL;
short var_12 = (short)6643;
unsigned long long int var_13 = 5047247461377216254ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
