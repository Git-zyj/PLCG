#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24421;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 15004536764335206665ULL;
unsigned short var_9 = (unsigned short)34706;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-22;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)76;
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
