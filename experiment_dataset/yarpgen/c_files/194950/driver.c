#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2133528682U;
long long int var_2 = 2655505289612833304LL;
unsigned char var_11 = (unsigned char)138;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-26;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 671976725U;
void init() {
}

void checksum() {
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
