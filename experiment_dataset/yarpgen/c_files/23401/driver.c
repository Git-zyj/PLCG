#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1819328654419905666LL;
int var_7 = -97749890;
unsigned long long int var_8 = 624027692076498180ULL;
long long int var_11 = -2253268801886240712LL;
unsigned long long int var_13 = 18169572101598087200ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = -1539646675;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
