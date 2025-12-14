#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_4 = (signed char)-94;
unsigned long long int var_5 = 7145384491236983786ULL;
_Bool var_10 = (_Bool)0;
int var_12 = -1370443902;
int var_18 = -1683915916;
int zero = 0;
unsigned long long int var_20 = 12889790398971187059ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
