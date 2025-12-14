#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1759952216;
int var_4 = 1338876445;
long long int var_6 = -4141201762224310015LL;
short var_8 = (short)8241;
int var_12 = -1960805231;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1061975548U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
