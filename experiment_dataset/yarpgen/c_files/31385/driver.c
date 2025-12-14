#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_5 = -7390315719653750181LL;
signed char var_7 = (signed char)113;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_12 = 4845048636200147274LL;
unsigned short var_13 = (unsigned short)42403;
void init() {
}

void checksum() {
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
