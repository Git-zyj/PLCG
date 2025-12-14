#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2036091432U;
_Bool var_8 = (_Bool)1;
unsigned int var_12 = 2065528464U;
short var_14 = (short)-13473;
int zero = 0;
unsigned char var_15 = (unsigned char)11;
long long int var_16 = 301589158899076284LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
