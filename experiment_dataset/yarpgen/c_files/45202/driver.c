#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)141;
signed char var_7 = (signed char)59;
int var_13 = 833579729;
short var_16 = (short)-13873;
int zero = 0;
short var_19 = (short)-31560;
short var_20 = (short)1348;
unsigned int var_21 = 3439998622U;
short var_22 = (short)-21103;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
