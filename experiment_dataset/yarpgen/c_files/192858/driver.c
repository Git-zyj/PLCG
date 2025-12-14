#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9655411573576049641ULL;
unsigned short var_2 = (unsigned short)15954;
unsigned short var_4 = (unsigned short)1405;
unsigned short var_7 = (unsigned short)46781;
int zero = 0;
unsigned short var_10 = (unsigned short)60447;
unsigned short var_11 = (unsigned short)53374;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
