#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)57408;
unsigned long long int var_5 = 10864402260729007494ULL;
signed char var_14 = (signed char)-108;
int zero = 0;
unsigned int var_15 = 1924714350U;
int var_16 = 2128240433;
unsigned short var_17 = (unsigned short)43227;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
