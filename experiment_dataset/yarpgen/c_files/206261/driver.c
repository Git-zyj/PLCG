#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9109796725262533024ULL;
short var_3 = (short)-14026;
unsigned long long int var_5 = 12055521076406928862ULL;
int zero = 0;
short var_11 = (short)-22470;
short var_12 = (short)27496;
short var_13 = (short)-30449;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
