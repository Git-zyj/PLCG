#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3462324711U;
unsigned int var_5 = 1200957046U;
unsigned int var_8 = 2701578452U;
unsigned int var_10 = 2726005752U;
signed char var_14 = (signed char)42;
short var_16 = (short)-16215;
long long int var_17 = 5310940282640414031LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 12667572718443928969ULL;
void init() {
}

void checksum() {
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
