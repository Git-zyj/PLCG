#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 7795397733925429629LL;
unsigned short var_7 = (unsigned short)10624;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = 1088075377;
unsigned long long int var_14 = 15638479944421459250ULL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3253898566U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
