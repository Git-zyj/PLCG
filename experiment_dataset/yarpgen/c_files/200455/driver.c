#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17909564367281028193ULL;
int var_4 = 1195813555;
_Bool var_8 = (_Bool)1;
long long int var_13 = -8704930175086368037LL;
int zero = 0;
unsigned long long int var_17 = 6161356497071570577ULL;
signed char var_18 = (signed char)-122;
unsigned int var_19 = 2763103211U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
