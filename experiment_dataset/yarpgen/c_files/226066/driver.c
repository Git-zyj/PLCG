#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -123313266;
unsigned short var_12 = (unsigned short)64280;
int var_13 = 303511786;
short var_15 = (short)-32410;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -516236019430591855LL;
void init() {
}

void checksum() {
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
