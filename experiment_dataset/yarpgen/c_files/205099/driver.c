#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 72747596975437388ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = 2470691479282423114LL;
short var_15 = (short)-13306;
unsigned int var_16 = 1299885893U;
unsigned long long int var_17 = 12785467318190475826ULL;
long long int var_18 = 4769492279587782334LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
