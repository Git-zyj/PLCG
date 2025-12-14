#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25747;
unsigned short var_2 = (unsigned short)53839;
signed char var_3 = (signed char)12;
signed char var_7 = (signed char)12;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 13897276346703768259ULL;
int zero = 0;
short var_12 = (short)-13750;
long long int var_13 = -8131029069734670826LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
