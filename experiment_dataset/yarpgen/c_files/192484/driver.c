#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -877227390;
int var_4 = 1160108091;
signed char var_5 = (signed char)18;
unsigned int var_11 = 1987675790U;
long long int var_12 = 8108723923831277252LL;
short var_13 = (short)6832;
_Bool var_14 = (_Bool)0;
signed char var_16 = (signed char)97;
int zero = 0;
unsigned long long int var_18 = 12616444732858342270ULL;
int var_19 = -821184306;
long long int var_20 = 6678088474925555249LL;
signed char var_21 = (signed char)55;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
