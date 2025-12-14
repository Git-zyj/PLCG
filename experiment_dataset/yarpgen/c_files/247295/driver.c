#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4097925036208485207LL;
unsigned int var_1 = 703292864U;
signed char var_2 = (signed char)-50;
short var_5 = (short)-21249;
unsigned long long int var_6 = 5404284051808644356ULL;
unsigned int var_10 = 3772914338U;
long long int var_11 = 1078527100403029077LL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)12382;
int zero = 0;
short var_14 = (short)-17974;
signed char var_15 = (signed char)-89;
int var_16 = -1857426120;
unsigned long long int var_17 = 11709569168517318001ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
