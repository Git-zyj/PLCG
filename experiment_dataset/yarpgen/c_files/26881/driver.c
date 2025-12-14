#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18420694664359829205ULL;
long long int var_12 = -8448034952558393682LL;
int zero = 0;
short var_14 = (short)-27800;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 1476434788776130248ULL;
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
