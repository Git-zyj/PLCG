#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-22542;
long long int var_7 = -8779869369484453342LL;
unsigned int var_10 = 3843432992U;
int zero = 0;
unsigned char var_11 = (unsigned char)152;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2823816450U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
