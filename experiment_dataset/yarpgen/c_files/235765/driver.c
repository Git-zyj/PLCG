#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 272735640U;
_Bool var_2 = (_Bool)0;
long long int var_4 = 1109185798204564816LL;
signed char var_5 = (signed char)-97;
_Bool var_6 = (_Bool)0;
signed char var_10 = (signed char)-17;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-30741;
long long int var_13 = -2390484227352978867LL;
long long int var_14 = 8814238428279171241LL;
signed char var_15 = (signed char)57;
int zero = 0;
int var_16 = -830924449;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 279368117U;
short var_19 = (short)-25563;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
