#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9460094376673201529ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_13 = 2624363419U;
unsigned int var_14 = 2584733458U;
int zero = 0;
unsigned char var_16 = (unsigned char)69;
unsigned long long int var_17 = 13812483462121646116ULL;
_Bool var_18 = (_Bool)1;
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
