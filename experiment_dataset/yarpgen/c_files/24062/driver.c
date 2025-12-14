#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -826582648;
signed char var_7 = (signed char)-115;
unsigned char var_9 = (unsigned char)248;
int var_10 = 1165904381;
int var_12 = 1446116350;
signed char var_15 = (signed char)72;
int zero = 0;
int var_16 = 1010900816;
int var_17 = -578692154;
signed char var_18 = (signed char)-29;
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
