#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3107546090079385846ULL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 8289219323675100182LL;
unsigned int var_7 = 1892697697U;
long long int var_8 = 7460545680277113556LL;
unsigned int var_9 = 2715259385U;
unsigned long long int var_10 = 5092549040981368096ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-108;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
