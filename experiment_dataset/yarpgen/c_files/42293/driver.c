#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)12;
signed char var_6 = (signed char)14;
unsigned int var_7 = 1265864234U;
unsigned char var_9 = (unsigned char)215;
int zero = 0;
unsigned char var_12 = (unsigned char)154;
unsigned int var_13 = 1037934137U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
