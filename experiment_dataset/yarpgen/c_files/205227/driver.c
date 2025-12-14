#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11366209584826386473ULL;
int var_15 = -1699063941;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = -2001741924;
_Bool var_19 = (_Bool)1;
long long int var_20 = -2649686930575295657LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
