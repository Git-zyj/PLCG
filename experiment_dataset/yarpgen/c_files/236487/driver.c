#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3449480987877997040LL;
short var_13 = (short)-14675;
unsigned int var_17 = 1506629583U;
int zero = 0;
short var_20 = (short)-18757;
_Bool var_21 = (_Bool)0;
long long int var_22 = 7809403486416542775LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
