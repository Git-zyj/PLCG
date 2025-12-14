#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 12211985929358836672ULL;
int var_7 = -65498687;
_Bool var_9 = (_Bool)1;
unsigned short var_12 = (unsigned short)36045;
int var_13 = -1540081962;
unsigned long long int var_14 = 1335474891070634971ULL;
int zero = 0;
int var_15 = -965541177;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3091128389U;
void init() {
}

void checksum() {
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
