#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11217346702730518831ULL;
int var_4 = -7608644;
_Bool var_9 = (_Bool)1;
unsigned int var_12 = 1681435216U;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)3;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 2111617832U;
unsigned char var_19 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
