#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)78;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-100;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
