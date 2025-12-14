#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5722211199189319880LL;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)17;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)47;
signed char var_17 = (signed char)99;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
