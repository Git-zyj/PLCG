#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)0;
long long int var_14 = -535505700756026957LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)124;
unsigned long long int var_17 = 7814059790698670109ULL;
_Bool var_18 = (_Bool)0;
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
