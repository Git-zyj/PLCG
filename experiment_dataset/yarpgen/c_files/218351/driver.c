#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15165191976484153260ULL;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_15 = 1745073681U;
int zero = 0;
signed char var_19 = (signed char)-46;
int var_20 = -303239201;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
