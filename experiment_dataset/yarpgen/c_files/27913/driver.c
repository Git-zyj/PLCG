#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5230421983166584712LL;
long long int var_12 = 7204514828898903373LL;
int zero = 0;
signed char var_16 = (signed char)-96;
unsigned char var_17 = (unsigned char)23;
unsigned int var_18 = 2165236870U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
