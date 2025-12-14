#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2566819993851472548LL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)4805;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 10928460807344128935ULL;
void init() {
}

void checksum() {
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
