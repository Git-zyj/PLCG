#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11709;
unsigned int var_3 = 3373711704U;
unsigned char var_7 = (unsigned char)21;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 2088020754057294180ULL;
unsigned char var_20 = (unsigned char)197;
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
