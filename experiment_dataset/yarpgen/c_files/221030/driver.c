#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3935724149U;
signed char var_3 = (signed char)79;
short var_4 = (short)17746;
int var_9 = -1204741876;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 9351582721193680517ULL;
unsigned short var_15 = (unsigned short)55206;
void init() {
}

void checksum() {
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
