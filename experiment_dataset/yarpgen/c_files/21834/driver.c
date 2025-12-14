#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)106;
long long int var_5 = -1352100096285386092LL;
unsigned int var_7 = 2240323578U;
unsigned int var_14 = 4793070U;
int zero = 0;
int var_20 = -1796839841;
signed char var_21 = (signed char)38;
unsigned char var_22 = (unsigned char)239;
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
