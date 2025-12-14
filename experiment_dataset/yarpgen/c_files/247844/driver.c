#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)609;
unsigned long long int var_7 = 15302059378173725708ULL;
signed char var_12 = (signed char)124;
int zero = 0;
short var_15 = (short)30546;
unsigned long long int var_16 = 4798855207427101667ULL;
unsigned long long int var_17 = 8192602273495788979ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
