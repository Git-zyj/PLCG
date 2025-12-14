#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 86895233;
unsigned short var_2 = (unsigned short)25452;
unsigned long long int var_9 = 5163617733920815894ULL;
unsigned int var_13 = 2390506665U;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)13452;
unsigned short var_17 = (unsigned short)4289;
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
