#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14776;
long long int var_9 = -5000322629497333947LL;
long long int var_10 = 6987267146695321696LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_16 = -6327920327676932687LL;
short var_17 = (short)-5943;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
