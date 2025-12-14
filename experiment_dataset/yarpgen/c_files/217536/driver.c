#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
int var_7 = -1270578309;
unsigned int var_9 = 702271797U;
signed char var_10 = (signed char)-30;
int zero = 0;
unsigned char var_11 = (unsigned char)20;
unsigned char var_12 = (unsigned char)250;
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
