#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7667930956219131026LL;
int var_5 = -682058120;
unsigned int var_6 = 3559311704U;
int var_7 = 652158475;
_Bool var_10 = (_Bool)1;
short var_14 = (short)6872;
int zero = 0;
short var_15 = (short)5333;
unsigned char var_16 = (unsigned char)227;
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
