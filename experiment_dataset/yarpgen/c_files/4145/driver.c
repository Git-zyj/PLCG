#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
signed char var_1 = (signed char)67;
long long int var_5 = 522758443730502045LL;
int zero = 0;
int var_10 = -1933303883;
unsigned char var_11 = (unsigned char)164;
unsigned int var_12 = 2913772686U;
signed char var_13 = (signed char)79;
short var_14 = (short)13988;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
