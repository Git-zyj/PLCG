#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17687;
signed char var_1 = (signed char)105;
unsigned char var_2 = (unsigned char)107;
unsigned char var_3 = (unsigned char)255;
signed char var_6 = (signed char)126;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)-75;
signed char var_14 = (signed char)109;
short var_15 = (short)9359;
int zero = 0;
long long int var_16 = 3785612657903514470LL;
signed char var_17 = (signed char)24;
void init() {
}

void checksum() {
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
