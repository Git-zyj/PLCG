#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1313728710U;
long long int var_13 = 6810082157546411992LL;
unsigned long long int var_14 = 8381742674200158649ULL;
unsigned int var_17 = 1061719019U;
signed char var_18 = (signed char)-6;
int zero = 0;
long long int var_19 = -2196137208127626177LL;
signed char var_20 = (signed char)-124;
void init() {
}

void checksum() {
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
