#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2156806442U;
unsigned long long int var_1 = 11810300329482617652ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_9 = (unsigned short)48419;
int zero = 0;
unsigned long long int var_10 = 3187015304209001714ULL;
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
