#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)212;
short var_7 = (short)-4497;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 2775933655U;
unsigned long long int var_11 = 11632966840763335328ULL;
int zero = 0;
short var_13 = (short)22555;
long long int var_14 = -2010116542962738651LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
