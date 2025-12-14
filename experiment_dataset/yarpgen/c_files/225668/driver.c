#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
short var_8 = (short)-27246;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = -7895626456813365111LL;
unsigned long long int var_13 = 9405736706997153478ULL;
long long int var_14 = -2038272285789892064LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
