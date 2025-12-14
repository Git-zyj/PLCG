#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)3607;
long long int var_6 = -2622168221017773425LL;
long long int var_9 = -1932435566056483353LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 7170723013682824352LL;
int var_15 = 311102914;
int zero = 0;
signed char var_16 = (signed char)-94;
long long int var_17 = -6283217597810021159LL;
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
