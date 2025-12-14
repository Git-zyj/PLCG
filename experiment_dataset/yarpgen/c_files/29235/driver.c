#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 4402502660114934638ULL;
_Bool var_16 = (_Bool)0;
int var_19 = 1823136695;
int zero = 0;
long long int var_20 = 484206485371856761LL;
unsigned long long int var_21 = 3228621225331716505ULL;
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
