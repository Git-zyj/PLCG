#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 4896546402428050243ULL;
signed char var_8 = (signed char)87;
int var_9 = 1761685802;
unsigned long long int var_16 = 1980955611646181822ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 6425023645711283067ULL;
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
