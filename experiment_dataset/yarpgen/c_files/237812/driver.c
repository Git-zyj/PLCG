#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5557340650088129981LL;
short var_1 = (short)-13328;
unsigned int var_3 = 2577085892U;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 2537443967326895705ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)10215;
unsigned long long int var_11 = 8821521970700449051ULL;
unsigned char var_12 = (unsigned char)244;
signed char var_13 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
