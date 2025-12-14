#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2606245922U;
int var_2 = 1545538510;
short var_3 = (short)5015;
unsigned int var_4 = 3143971720U;
unsigned long long int var_8 = 8453400267345163154ULL;
unsigned long long int var_9 = 12161000961269066187ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-123;
int var_15 = -1896253804;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
