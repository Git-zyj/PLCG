#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 991489096095675445ULL;
unsigned int var_7 = 87641373U;
unsigned int var_10 = 3472400536U;
unsigned long long int var_11 = 13718067609650753691ULL;
int var_13 = -433225161;
int zero = 0;
unsigned int var_17 = 271049609U;
unsigned short var_18 = (unsigned short)24016;
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
