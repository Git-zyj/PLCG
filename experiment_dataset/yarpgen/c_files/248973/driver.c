#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)89;
_Bool var_10 = (_Bool)0;
long long int var_12 = -4926019100315842162LL;
int zero = 0;
unsigned int var_14 = 4151819107U;
unsigned long long int var_15 = 10046740308839931275ULL;
long long int var_16 = 5915484945078049589LL;
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
