#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5099054439029022949ULL;
long long int var_2 = -9027469618094598638LL;
short var_4 = (short)29639;
long long int var_8 = 2689087175944757339LL;
unsigned int var_10 = 3779062855U;
int zero = 0;
short var_13 = (short)-30115;
long long int var_14 = 4352961320072581845LL;
signed char var_15 = (signed char)62;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
