#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-99;
signed char var_3 = (signed char)45;
unsigned char var_4 = (unsigned char)57;
_Bool var_7 = (_Bool)1;
long long int var_9 = 7551362763364335788LL;
int zero = 0;
unsigned char var_14 = (unsigned char)97;
signed char var_15 = (signed char)28;
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
