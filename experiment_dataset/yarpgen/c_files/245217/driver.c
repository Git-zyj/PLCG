#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51421;
unsigned int var_1 = 30273169U;
int var_3 = -1288362052;
unsigned short var_8 = (unsigned short)63607;
unsigned int var_13 = 1553392453U;
int zero = 0;
long long int var_15 = 5019380255062137925LL;
unsigned long long int var_16 = 8726721092085092517ULL;
_Bool var_17 = (_Bool)1;
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
