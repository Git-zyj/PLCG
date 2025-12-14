#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 485948441U;
long long int var_11 = 266017552663902784LL;
unsigned int var_16 = 3820481377U;
unsigned long long int var_18 = 9207627844880279044ULL;
int zero = 0;
unsigned int var_19 = 636683936U;
unsigned int var_20 = 399342849U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
