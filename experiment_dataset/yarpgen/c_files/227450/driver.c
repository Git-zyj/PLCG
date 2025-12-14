#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17059360820446045253ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2715741624U;
unsigned long long int var_4 = 17459184444594740558ULL;
unsigned long long int var_5 = 5030973948834192030ULL;
signed char var_9 = (signed char)3;
int zero = 0;
unsigned long long int var_10 = 18436001818341310214ULL;
unsigned int var_11 = 2085154872U;
_Bool var_12 = (_Bool)0;
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
