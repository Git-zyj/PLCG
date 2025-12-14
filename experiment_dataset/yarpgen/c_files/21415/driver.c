#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6261316964657917297ULL;
_Bool var_7 = (_Bool)1;
signed char var_15 = (signed char)-111;
int zero = 0;
int var_20 = -82195890;
unsigned int var_21 = 3495395992U;
int var_22 = 1125253688;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
