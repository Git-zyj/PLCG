#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1841371096254214611ULL;
short var_3 = (short)25217;
short var_10 = (short)5393;
signed char var_12 = (signed char)8;
unsigned long long int var_13 = 10702008719009646843ULL;
int var_16 = 543409614;
int zero = 0;
unsigned long long int var_20 = 17766618726179259747ULL;
unsigned int var_21 = 1181173467U;
signed char var_22 = (signed char)-88;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
