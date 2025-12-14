#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2536175074U;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-23008;
unsigned char var_11 = (unsigned char)74;
int zero = 0;
unsigned char var_13 = (unsigned char)154;
long long int var_14 = -5278624864697264482LL;
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
