#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
signed char var_4 = (signed char)42;
unsigned long long int var_5 = 14318365931067514795ULL;
unsigned long long int var_8 = 18004023685957709800ULL;
int var_10 = 253273306;
int zero = 0;
short var_12 = (short)-30606;
signed char var_13 = (signed char)109;
short var_14 = (short)-26977;
void init() {
}

void checksum() {
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
