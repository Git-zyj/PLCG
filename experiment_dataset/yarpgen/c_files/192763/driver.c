#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4827281646132066396LL;
_Bool var_7 = (_Bool)1;
unsigned int var_10 = 608215162U;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 430276118;
int var_20 = -2073651938;
void init() {
}

void checksum() {
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
