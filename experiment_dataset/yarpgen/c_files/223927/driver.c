#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 18234487686715756045ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 14189329008711211311ULL;
unsigned short var_17 = (unsigned short)37961;
unsigned long long int var_18 = 9223116659211276296ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
