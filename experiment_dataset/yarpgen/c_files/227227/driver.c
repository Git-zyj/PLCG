#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7930;
_Bool var_2 = (_Bool)0;
unsigned long long int var_6 = 12860671050560472513ULL;
short var_7 = (short)-969;
int var_8 = 2101841259;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)12872;
unsigned short var_14 = (unsigned short)13081;
long long int var_15 = -2769060426438202457LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
