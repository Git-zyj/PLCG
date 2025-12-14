#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23412;
short var_6 = (short)-4880;
short var_13 = (short)-31878;
long long int var_15 = 1606262967239202152LL;
int var_16 = 898973114;
int zero = 0;
unsigned char var_18 = (unsigned char)96;
long long int var_19 = 3306871452882934218LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
