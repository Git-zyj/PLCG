#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-32;
signed char var_11 = (signed char)97;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 7414767049051855454ULL;
unsigned int var_15 = 4009346242U;
void init() {
}

void checksum() {
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
