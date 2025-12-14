#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -550893309;
int var_7 = -452361998;
long long int var_9 = -3766792123591848865LL;
short var_11 = (short)-22914;
unsigned short var_12 = (unsigned short)20192;
int zero = 0;
unsigned long long int var_14 = 8374092365932502568ULL;
unsigned short var_15 = (unsigned short)44309;
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
