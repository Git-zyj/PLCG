#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 13977032067913717281ULL;
unsigned int var_15 = 3978077855U;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 3345305120U;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 4282482347U;
void init() {
}

void checksum() {
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
