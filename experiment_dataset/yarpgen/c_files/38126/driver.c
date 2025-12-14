#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3940486575889199961ULL;
int var_3 = -688553009;
unsigned long long int var_5 = 4525665453862899610ULL;
long long int var_7 = 2544591444665450612LL;
long long int var_8 = -1576834956163657941LL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1695432131U;
long long int var_13 = -397198873508775552LL;
unsigned long long int var_14 = 17001892697536965216ULL;
unsigned short var_15 = (unsigned short)30222;
signed char var_16 = (signed char)58;
int var_17 = -1782484968;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)24884;
signed char var_20 = (signed char)-120;
unsigned int var_21 = 3788128074U;
unsigned long long int var_22 = 15638695785209094830ULL;
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
