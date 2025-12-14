#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1359810941U;
int var_3 = 1630629263;
unsigned short var_6 = (unsigned short)27150;
unsigned char var_7 = (unsigned char)96;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 13449185264256149867ULL;
short var_12 = (short)6392;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
