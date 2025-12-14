#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_5 = 447815155;
signed char var_7 = (signed char)-127;
signed char var_8 = (signed char)69;
int zero = 0;
long long int var_10 = 14902719487328652LL;
unsigned long long int var_11 = 5420903917972598091ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
