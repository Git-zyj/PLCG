#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2135155891U;
unsigned long long int var_5 = 9564465328482610277ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 11782860885252860052ULL;
int zero = 0;
unsigned int var_11 = 729487416U;
long long int var_12 = 3610005712279978362LL;
void init() {
}

void checksum() {
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
