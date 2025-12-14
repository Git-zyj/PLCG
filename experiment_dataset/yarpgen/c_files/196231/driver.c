#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -890737746661757229LL;
_Bool var_3 = (_Bool)0;
short var_11 = (short)-19298;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-102;
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
