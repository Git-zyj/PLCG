#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 4775371193355780096LL;
long long int var_10 = -6648389572257523001LL;
int zero = 0;
unsigned int var_14 = 1844038395U;
unsigned char var_15 = (unsigned char)13;
unsigned long long int var_16 = 18123501488777419923ULL;
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
