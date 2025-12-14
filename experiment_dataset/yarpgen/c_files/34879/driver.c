#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)109;
_Bool var_1 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned int var_10 = 361174244U;
unsigned long long int var_14 = 126055365488132305ULL;
unsigned char var_16 = (unsigned char)107;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)19;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)46;
unsigned int var_23 = 1504260153U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
