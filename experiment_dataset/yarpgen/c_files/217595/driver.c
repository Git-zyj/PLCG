#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)85;
unsigned short var_6 = (unsigned short)8914;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 14235268955660267622ULL;
short var_15 = (short)-2912;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-6207;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
