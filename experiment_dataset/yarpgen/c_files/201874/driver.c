#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3810794835U;
long long int var_4 = -4765068445958140353LL;
_Bool var_5 = (_Bool)0;
int var_6 = -1469105857;
long long int var_8 = -166879801227922526LL;
unsigned int var_9 = 766973711U;
long long int var_10 = 1983461130014405740LL;
unsigned long long int var_14 = 4571992601036219853ULL;
int zero = 0;
long long int var_16 = 7354573086002655834LL;
signed char var_17 = (signed char)-15;
short var_18 = (short)4008;
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
