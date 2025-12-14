#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8223002412236304152ULL;
unsigned short var_10 = (unsigned short)63372;
unsigned int var_12 = 194188798U;
signed char var_13 = (signed char)51;
int var_14 = 2089726187;
int zero = 0;
unsigned int var_17 = 3485938607U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
