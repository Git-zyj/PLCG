#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-91;
signed char var_13 = (signed char)51;
unsigned long long int var_18 = 16802971157627329367ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -1498559950;
unsigned int var_21 = 2975807726U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
