#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7338;
long long int var_3 = -5856790947645868850LL;
int var_4 = -1929673721;
int var_5 = 1092958146;
unsigned int var_11 = 3719092899U;
short var_12 = (short)29773;
int zero = 0;
long long int var_13 = 7521594051567962597LL;
signed char var_14 = (signed char)2;
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
