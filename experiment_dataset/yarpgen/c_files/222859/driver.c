#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4783361368566717216LL;
int var_4 = -1965820648;
int var_6 = -1608205018;
int var_9 = -6965632;
long long int var_13 = -2890319332793649752LL;
int zero = 0;
int var_20 = -23671806;
long long int var_21 = -6346560696197177139LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
