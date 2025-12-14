#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 1088795696U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int var_8 = -1697506628;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)33534;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-25305;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
