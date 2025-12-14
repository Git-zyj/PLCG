#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4981091829666277630ULL;
signed char var_6 = (signed char)2;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 13979029074259372825ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
