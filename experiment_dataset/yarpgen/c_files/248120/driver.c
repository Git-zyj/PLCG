#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14406662851891057917ULL;
unsigned short var_3 = (unsigned short)38914;
_Bool var_5 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)39605;
_Bool var_14 = (_Bool)0;
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
