#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 711849833166828297ULL;
signed char var_1 = (signed char)27;
unsigned char var_6 = (unsigned char)101;
unsigned char var_7 = (unsigned char)217;
unsigned int var_9 = 1985831310U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_11 = 2510005588U;
_Bool var_12 = (_Bool)0;
long long int var_13 = 8114388221279191401LL;
unsigned char var_14 = (unsigned char)46;
unsigned int var_15 = 3255807346U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
