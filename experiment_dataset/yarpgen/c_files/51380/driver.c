#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1915954497262197476LL;
unsigned long long int var_2 = 4210594610726006509ULL;
signed char var_5 = (signed char)100;
signed char var_7 = (signed char)51;
signed char var_10 = (signed char)-112;
signed char var_14 = (signed char)-71;
int zero = 0;
unsigned long long int var_16 = 14903470334580757571ULL;
short var_17 = (short)27702;
signed char var_18 = (signed char)-102;
unsigned int var_19 = 3838336804U;
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
