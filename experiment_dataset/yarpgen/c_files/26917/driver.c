#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 181291443;
unsigned long long int var_13 = 10897090986251825939ULL;
long long int var_14 = 408874896649528545LL;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-24;
signed char var_17 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
