#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23051;
unsigned long long int var_7 = 17324311279317928758ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 12851261279206339754ULL;
unsigned short var_12 = (unsigned short)7504;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
