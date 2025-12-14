#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1214368192U;
int var_2 = -1724237021;
unsigned long long int var_5 = 16378376485106970649ULL;
int var_6 = 767586938;
unsigned int var_7 = 515625943U;
int var_8 = -2141704135;
int var_9 = -135467404;
_Bool var_12 = (_Bool)1;
signed char var_15 = (signed char)-36;
unsigned int var_18 = 4130092112U;
int zero = 0;
unsigned long long int var_19 = 18038227893805566865ULL;
int var_20 = 1028506344;
short var_21 = (short)16899;
signed char var_22 = (signed char)93;
void init() {
}

void checksum() {
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
