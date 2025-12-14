#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1045854975;
unsigned short var_6 = (unsigned short)24450;
short var_11 = (short)1765;
unsigned long long int var_17 = 11399119364252643409ULL;
int zero = 0;
int var_18 = 1917951429;
signed char var_19 = (signed char)-81;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
