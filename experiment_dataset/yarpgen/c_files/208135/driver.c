#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -1425999728;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 10393637452516892620ULL;
unsigned long long int var_8 = 2892852961427689059ULL;
long long int var_9 = 7843764057513540621LL;
unsigned short var_10 = (unsigned short)50605;
long long int var_11 = 1645403985239288438LL;
unsigned int var_12 = 3202719090U;
unsigned char var_13 = (unsigned char)191;
long long int var_14 = 1391540466162095872LL;
unsigned long long int var_15 = 16672677292741200494ULL;
int zero = 0;
unsigned long long int var_16 = 231038455098056972ULL;
unsigned char var_17 = (unsigned char)173;
short var_18 = (short)11088;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
