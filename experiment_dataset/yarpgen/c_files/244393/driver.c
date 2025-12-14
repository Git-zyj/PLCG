#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 4063331564U;
short var_4 = (short)5926;
long long int var_5 = 7794232218092319128LL;
unsigned int var_8 = 2176648781U;
signed char var_9 = (signed char)104;
unsigned long long int var_10 = 10716183074661733637ULL;
unsigned char var_11 = (unsigned char)139;
int zero = 0;
unsigned int var_14 = 289504052U;
signed char var_15 = (signed char)78;
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
