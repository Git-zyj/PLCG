#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1341903549U;
unsigned long long int var_3 = 6701246301052183929ULL;
unsigned long long int var_10 = 4554416150679349513ULL;
int zero = 0;
short var_11 = (short)25651;
unsigned short var_12 = (unsigned short)42743;
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
