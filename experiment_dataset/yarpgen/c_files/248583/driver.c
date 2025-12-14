#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36457;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)5227;
unsigned long long int var_5 = 5632666989172950293ULL;
int var_6 = 2091196230;
short var_7 = (short)1373;
int zero = 0;
int var_10 = 1257304495;
unsigned int var_11 = 2576352601U;
unsigned int var_12 = 1015978333U;
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
