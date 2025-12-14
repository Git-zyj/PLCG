#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)0;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)2;
int var_10 = 488164884;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_14 = 2054227822;
int var_15 = -1582276567;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
