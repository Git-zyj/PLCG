#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1892355785;
unsigned long long int var_7 = 2768444739962622508ULL;
int var_9 = -1877319629;
long long int var_10 = 62718154483106515LL;
short var_11 = (short)-10596;
signed char var_12 = (signed char)23;
signed char var_15 = (signed char)84;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)40351;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-14232;
unsigned short var_20 = (unsigned short)22047;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
