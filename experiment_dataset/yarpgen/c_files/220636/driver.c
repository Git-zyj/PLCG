#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2649455743503517667ULL;
unsigned long long int var_5 = 788820983405646681ULL;
short var_12 = (short)22305;
int zero = 0;
unsigned int var_14 = 2185590685U;
unsigned int var_15 = 4095481458U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
