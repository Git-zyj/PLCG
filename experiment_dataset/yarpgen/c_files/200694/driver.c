#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 12395008825326789665ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_13 = 6074670043620999259LL;
_Bool var_14 = (_Bool)0;
int var_15 = 1267028396;
unsigned char var_16 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
