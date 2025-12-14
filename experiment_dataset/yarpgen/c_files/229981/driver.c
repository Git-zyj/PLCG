#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)50463;
short var_4 = (short)-28681;
unsigned long long int var_9 = 2308828858089228160ULL;
long long int var_10 = 8832605891772727635LL;
int var_17 = 1750476752;
int zero = 0;
int var_18 = 1926497665;
int var_19 = -447806705;
void init() {
}

void checksum() {
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
