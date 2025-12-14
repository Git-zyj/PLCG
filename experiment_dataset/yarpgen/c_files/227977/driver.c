#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29352;
short var_2 = (short)-20582;
_Bool var_6 = (_Bool)0;
unsigned short var_12 = (unsigned short)46933;
int zero = 0;
unsigned long long int var_13 = 12279198244676090867ULL;
short var_14 = (short)28614;
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
