#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -312132982;
unsigned int var_12 = 1188634214U;
unsigned long long int var_14 = 18391673451840281900ULL;
unsigned char var_16 = (unsigned char)25;
int zero = 0;
signed char var_20 = (signed char)71;
long long int var_21 = -1448991943381954016LL;
short var_22 = (short)-2341;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
