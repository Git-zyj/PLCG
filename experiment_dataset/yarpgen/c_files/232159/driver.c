#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 13312191280341682980ULL;
signed char var_9 = (signed char)46;
int var_11 = -1090501546;
signed char var_13 = (signed char)2;
int zero = 0;
signed char var_14 = (signed char)-1;
long long int var_15 = -6713955188338120454LL;
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
