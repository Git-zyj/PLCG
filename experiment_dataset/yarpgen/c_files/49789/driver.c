#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46989;
signed char var_9 = (signed char)-41;
unsigned long long int var_13 = 17736508894046179601ULL;
int var_15 = -52681572;
int zero = 0;
unsigned long long int var_20 = 16509382448971462516ULL;
unsigned short var_21 = (unsigned short)36462;
unsigned long long int var_22 = 14983991773962355511ULL;
void init() {
}

void checksum() {
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
