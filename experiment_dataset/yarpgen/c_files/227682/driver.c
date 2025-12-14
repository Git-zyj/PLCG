#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7975687611247703902LL;
long long int var_7 = -8144128233664696327LL;
int zero = 0;
unsigned long long int var_13 = 12758871288123204656ULL;
int var_14 = -1876007466;
unsigned int var_15 = 2109446984U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
