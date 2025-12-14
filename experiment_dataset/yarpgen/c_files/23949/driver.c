#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3127408722U;
int var_2 = 147591012;
_Bool var_4 = (_Bool)1;
short var_13 = (short)3203;
int zero = 0;
signed char var_14 = (signed char)-107;
unsigned long long int var_15 = 195326205586318616ULL;
long long int var_16 = 7744030442326622510LL;
unsigned char var_17 = (unsigned char)114;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
