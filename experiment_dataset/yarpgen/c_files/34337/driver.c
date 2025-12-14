#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17260;
unsigned short var_1 = (unsigned short)39765;
int var_3 = 1790553496;
long long int var_4 = -141083794394222394LL;
long long int var_8 = -4638052096331871387LL;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 15442725745715038573ULL;
long long int var_14 = 649058294567642948LL;
unsigned int var_15 = 244408945U;
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
