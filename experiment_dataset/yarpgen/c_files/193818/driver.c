#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 205256679;
unsigned short var_3 = (unsigned short)5142;
_Bool var_4 = (_Bool)1;
long long int var_6 = -6364701689449810370LL;
long long int var_8 = -2410763106081882062LL;
signed char var_10 = (signed char)35;
int zero = 0;
long long int var_11 = -1869362790765210822LL;
long long int var_12 = 3880248640772860897LL;
int var_13 = 1125792240;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
