#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29033;
signed char var_4 = (signed char)-30;
unsigned long long int var_6 = 15301925226305656982ULL;
unsigned int var_7 = 421097503U;
int zero = 0;
signed char var_11 = (signed char)74;
unsigned int var_12 = 2181377906U;
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
