#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8546483151505647040LL;
signed char var_3 = (signed char)113;
short var_6 = (short)-12695;
unsigned char var_8 = (unsigned char)223;
long long int var_10 = 8407090330191574528LL;
unsigned int var_12 = 1406197637U;
unsigned int var_13 = 909952834U;
unsigned int var_14 = 58767886U;
int zero = 0;
unsigned int var_15 = 3472943265U;
signed char var_16 = (signed char)-101;
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
