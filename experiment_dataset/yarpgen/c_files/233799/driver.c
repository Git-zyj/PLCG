#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17762407367481296300ULL;
unsigned long long int var_10 = 1216213950944098847ULL;
int zero = 0;
unsigned long long int var_14 = 6301044242128530141ULL;
unsigned long long int var_15 = 12096740545905779053ULL;
long long int var_16 = 7185413291109224774LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
