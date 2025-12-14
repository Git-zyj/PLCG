#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 180817111;
int var_10 = 56662059;
short var_12 = (short)-27643;
int var_14 = -972551309;
int zero = 0;
short var_19 = (short)-28771;
short var_20 = (short)-23238;
short var_21 = (short)-5795;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
