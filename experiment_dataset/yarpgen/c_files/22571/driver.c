#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14287150096835067124ULL;
unsigned long long int var_7 = 4402826840776899621ULL;
unsigned long long int var_8 = 13281083875342975467ULL;
unsigned int var_12 = 2226979559U;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -1168826547598439950LL;
void init() {
}

void checksum() {
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
