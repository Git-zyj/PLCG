#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 9593654464790114982ULL;
unsigned long long int var_12 = 2879793133014289875ULL;
unsigned long long int var_15 = 3434392135922969586ULL;
int zero = 0;
signed char var_19 = (signed char)51;
signed char var_20 = (signed char)-125;
signed char var_21 = (signed char)-92;
unsigned long long int var_22 = 14896841965078805327ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
