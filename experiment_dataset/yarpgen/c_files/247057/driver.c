#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3780699272850866655ULL;
short var_2 = (short)3154;
unsigned long long int var_11 = 10496191801583886915ULL;
short var_12 = (short)17813;
int var_17 = -1782025440;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 1744153924;
int var_20 = -773675881;
void init() {
}

void checksum() {
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
