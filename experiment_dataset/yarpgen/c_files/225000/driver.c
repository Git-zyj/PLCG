#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-23;
unsigned long long int var_1 = 7323851936674342278ULL;
long long int var_4 = -5750271682073256196LL;
int var_5 = -706856199;
int zero = 0;
long long int var_11 = 9118252800023960825LL;
unsigned short var_12 = (unsigned short)29788;
unsigned long long int var_13 = 5890278707061947367ULL;
signed char var_14 = (signed char)19;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
