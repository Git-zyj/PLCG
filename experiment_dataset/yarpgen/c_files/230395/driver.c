#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)43;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 11750105175402237046ULL;
int var_8 = -1965374529;
unsigned long long int var_9 = 5358384763678795432ULL;
int zero = 0;
signed char var_10 = (signed char)28;
_Bool var_11 = (_Bool)1;
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
