#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2077977100U;
signed char var_2 = (signed char)-85;
signed char var_3 = (signed char)51;
int var_7 = -609818483;
int zero = 0;
short var_14 = (short)23852;
long long int var_15 = 5146841341296994390LL;
short var_16 = (short)7906;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
