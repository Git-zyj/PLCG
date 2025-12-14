#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -6559298238260827395LL;
_Bool var_2 = (_Bool)0;
long long int var_5 = 3311201123442119687LL;
long long int var_13 = 8022833505949061207LL;
long long int var_15 = -6584191700316310602LL;
_Bool var_16 = (_Bool)0;
long long int var_17 = -253022990099901122LL;
int zero = 0;
long long int var_20 = 2383647329107433264LL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
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
