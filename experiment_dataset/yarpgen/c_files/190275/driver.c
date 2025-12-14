#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-119;
unsigned long long int var_8 = 16323015480532239782ULL;
unsigned int var_12 = 105269123U;
signed char var_14 = (signed char)103;
int zero = 0;
int var_16 = 1117050890;
unsigned int var_17 = 61684350U;
short var_18 = (short)32629;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
