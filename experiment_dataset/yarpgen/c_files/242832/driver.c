#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)96;
unsigned short var_2 = (unsigned short)57697;
short var_3 = (short)-26075;
short var_6 = (short)-32189;
unsigned short var_8 = (unsigned short)31933;
unsigned long long int var_10 = 2342748224231070591ULL;
int var_13 = 532430839;
unsigned long long int var_15 = 10965613677629407135ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 3982573921847801520LL;
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
