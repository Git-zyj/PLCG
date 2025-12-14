#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -759154359;
signed char var_2 = (signed char)7;
unsigned int var_6 = 3724488480U;
short var_8 = (short)20808;
int zero = 0;
signed char var_10 = (signed char)106;
int var_11 = 1922197447;
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
