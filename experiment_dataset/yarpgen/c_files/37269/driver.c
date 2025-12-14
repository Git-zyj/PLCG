#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3345560055455762179LL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 163425593257101889LL;
unsigned int var_7 = 2575807173U;
unsigned short var_8 = (unsigned short)64647;
int zero = 0;
unsigned long long int var_11 = 6392790618773736372ULL;
unsigned char var_12 = (unsigned char)210;
int var_13 = -866331407;
short var_14 = (short)8235;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
