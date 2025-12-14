#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1752494112332115908ULL;
short var_2 = (short)15635;
unsigned long long int var_3 = 4687919324748023645ULL;
unsigned int var_4 = 3180402990U;
long long int var_6 = -8173039166360464257LL;
short var_8 = (short)26631;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2442330905U;
unsigned int var_14 = 1705697193U;
long long int var_15 = -9080738402515271965LL;
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
