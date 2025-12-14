#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6559480634441188598LL;
unsigned long long int var_3 = 16840393992503811771ULL;
int var_6 = -1895221521;
long long int var_13 = -4895111740383852963LL;
int var_17 = -1162291717;
short var_18 = (short)29825;
int zero = 0;
short var_20 = (short)5018;
long long int var_21 = 1437779347612360663LL;
long long int var_22 = 7219814935542622973LL;
unsigned int var_23 = 1433420502U;
unsigned long long int var_24 = 1185861938429624462ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
