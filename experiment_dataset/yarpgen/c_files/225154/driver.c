#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned long long int var_5 = 9106404801225673921ULL;
int var_6 = 562159990;
long long int var_7 = 5342815435098832921LL;
unsigned char var_8 = (unsigned char)23;
int zero = 0;
unsigned int var_10 = 3600179585U;
signed char var_11 = (signed char)43;
int var_12 = 957334358;
signed char var_13 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
