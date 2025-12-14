#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-86;
signed char var_3 = (signed char)(-127 - 1);
signed char var_5 = (signed char)-125;
unsigned int var_9 = 3246465911U;
int zero = 0;
signed char var_11 = (signed char)84;
signed char var_12 = (signed char)-107;
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
