#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4047745025U;
long long int var_4 = -2127252040276432180LL;
unsigned int var_6 = 3608405110U;
_Bool var_7 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)17118;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
