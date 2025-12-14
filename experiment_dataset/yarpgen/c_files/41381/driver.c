#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)191;
unsigned int var_9 = 3589843841U;
unsigned long long int var_10 = 18276734783111032865ULL;
unsigned int var_11 = 3337610085U;
int zero = 0;
unsigned int var_13 = 3639918721U;
long long int var_14 = -5549490057553504311LL;
void init() {
}

void checksum() {
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
