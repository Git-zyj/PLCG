#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -77000848;
_Bool var_6 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)0;
unsigned long long int var_18 = 7716694832126772085ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
