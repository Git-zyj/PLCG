#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
unsigned int var_1 = 713922922U;
signed char var_7 = (signed char)-34;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-91;
long long int var_12 = 2783287081233892855LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
