#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 8200669226289882674LL;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 419240438U;
signed char var_5 = (signed char)-27;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)77;
unsigned char var_9 = (unsigned char)227;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 1250417262U;
long long int var_13 = 806468376756446476LL;
unsigned long long int var_14 = 11408189635742710308ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
