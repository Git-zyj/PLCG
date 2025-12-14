#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2553981101U;
_Bool var_4 = (_Bool)0;
signed char var_8 = (signed char)90;
unsigned long long int var_15 = 5089179821579406538ULL;
int zero = 0;
signed char var_19 = (signed char)3;
long long int var_20 = 7883684317270393429LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
