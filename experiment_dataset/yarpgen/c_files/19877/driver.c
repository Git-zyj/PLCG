#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 17301466835563711130ULL;
signed char var_8 = (signed char)-13;
short var_11 = (short)-21528;
int zero = 0;
long long int var_16 = -4022113030599957266LL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-30139;
void init() {
}

void checksum() {
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
