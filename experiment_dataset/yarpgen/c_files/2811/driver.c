#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12007963020150286337ULL;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)23994;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 1692294075U;
signed char var_9 = (signed char)24;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)54;
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
