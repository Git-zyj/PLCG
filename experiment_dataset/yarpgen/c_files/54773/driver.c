#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)15;
unsigned long long int var_4 = 16321364294351689508ULL;
unsigned int var_6 = 2641367878U;
long long int var_7 = 6904595914815031615LL;
signed char var_10 = (signed char)80;
int zero = 0;
unsigned char var_11 = (unsigned char)10;
unsigned int var_12 = 2514208668U;
unsigned int var_13 = 469190219U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
