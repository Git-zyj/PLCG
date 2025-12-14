#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)27;
int var_4 = 1527110495;
unsigned int var_5 = 3944791488U;
unsigned int var_6 = 2210473153U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 12178908187180787691ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-6;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 642542753U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
