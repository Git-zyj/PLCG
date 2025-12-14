#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 2956080488125173361ULL;
unsigned long long int var_7 = 16071807536511267382ULL;
signed char var_8 = (signed char)47;
signed char var_9 = (signed char)22;
long long int var_11 = 360710830041067816LL;
long long int var_12 = -3646624227107331444LL;
int zero = 0;
signed char var_15 = (signed char)124;
unsigned char var_16 = (unsigned char)226;
signed char var_17 = (signed char)-63;
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
