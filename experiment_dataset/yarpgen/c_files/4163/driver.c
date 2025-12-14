#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
unsigned long long int var_1 = 151958286017013928ULL;
unsigned short var_6 = (unsigned short)22999;
unsigned long long int var_7 = 12309168848204482389ULL;
unsigned int var_8 = 1443121047U;
signed char var_11 = (signed char)-65;
unsigned short var_12 = (unsigned short)44699;
unsigned long long int var_14 = 871136460874564473ULL;
int zero = 0;
unsigned long long int var_15 = 3279262799643222433ULL;
unsigned char var_16 = (unsigned char)161;
unsigned long long int var_17 = 3638401879703415254ULL;
signed char var_18 = (signed char)108;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
