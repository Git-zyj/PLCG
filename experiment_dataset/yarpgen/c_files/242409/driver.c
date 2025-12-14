#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 8086266855424681259ULL;
unsigned long long int var_8 = 14646971676043778500ULL;
short var_10 = (short)-26736;
int zero = 0;
short var_19 = (short)-19570;
unsigned long long int var_20 = 18412494038053755064ULL;
void init() {
}

void checksum() {
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
