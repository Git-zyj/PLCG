#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
short var_4 = (short)-23130;
signed char var_6 = (signed char)100;
int zero = 0;
unsigned int var_12 = 3356180959U;
_Bool var_13 = (_Bool)0;
short var_14 = (short)182;
unsigned long long int var_15 = 3452748953788852194ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
