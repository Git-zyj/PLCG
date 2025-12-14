#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 910736868;
int var_4 = -1499250392;
long long int var_7 = 6414163960387014093LL;
long long int var_12 = -2930629939468070276LL;
unsigned long long int var_19 = 17905477523360415992ULL;
int zero = 0;
unsigned int var_20 = 1161153809U;
unsigned long long int var_21 = 11536926783616353754ULL;
void init() {
}

void checksum() {
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
