#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -3056149044639020795LL;
long long int var_9 = -8530366430284824149LL;
short var_10 = (short)4943;
signed char var_12 = (signed char)-41;
unsigned long long int var_13 = 9741885823936351006ULL;
int zero = 0;
unsigned long long int var_14 = 2291584834055563074ULL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-38;
unsigned int var_17 = 2677914032U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
