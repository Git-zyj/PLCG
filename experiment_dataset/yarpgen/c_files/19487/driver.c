#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_11 = (short)-24487;
unsigned long long int var_17 = 11339080233605070754ULL;
signed char var_18 = (signed char)-112;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)24058;
long long int var_22 = -7620399285106811172LL;
unsigned short var_23 = (unsigned short)14518;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
