#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
int var_6 = -1974857049;
signed char var_10 = (signed char)104;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 1747725006148327104LL;
signed char var_14 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
