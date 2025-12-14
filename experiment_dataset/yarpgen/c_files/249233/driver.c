#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_13 = 2344451235U;
unsigned long long int var_15 = 11902353476741595394ULL;
int zero = 0;
unsigned long long int var_19 = 2249809498410882696ULL;
signed char var_20 = (signed char)23;
unsigned char var_21 = (unsigned char)104;
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
