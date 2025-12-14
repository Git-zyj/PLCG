#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3227618416U;
unsigned short var_3 = (unsigned short)46298;
int var_12 = 1156595278;
unsigned int var_14 = 2594793551U;
int zero = 0;
short var_15 = (short)19113;
unsigned int var_16 = 1105237980U;
long long int var_17 = 2534968687024825927LL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
