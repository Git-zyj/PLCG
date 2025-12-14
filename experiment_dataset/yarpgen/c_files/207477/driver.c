#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
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
