#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3523948955150139886LL;
unsigned int var_5 = 88761568U;
signed char var_7 = (signed char)-33;
unsigned int var_11 = 147696518U;
long long int var_12 = 117342122223532492LL;
int var_13 = 1489406470;
unsigned int var_14 = 1845705607U;
int zero = 0;
short var_15 = (short)16066;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int var_18 = -1659984309;
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
