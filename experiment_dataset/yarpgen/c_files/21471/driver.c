#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1212712817228644436ULL;
int var_4 = -2139519923;
unsigned long long int var_7 = 14117672384912563499ULL;
int zero = 0;
long long int var_17 = -3149505298561584660LL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)35807;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
