#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29200;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)141;
unsigned char var_6 = (unsigned char)84;
long long int var_7 = -5104101317193618272LL;
long long int var_10 = -6635949400984944053LL;
short var_11 = (short)14086;
int var_12 = -760061937;
unsigned int var_13 = 1319446954U;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)100;
int zero = 0;
short var_18 = (short)27697;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)21;
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
