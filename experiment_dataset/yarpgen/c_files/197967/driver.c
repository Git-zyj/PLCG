#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
int var_6 = 187327624;
unsigned char var_7 = (unsigned char)16;
unsigned char var_8 = (unsigned char)120;
signed char var_10 = (signed char)-41;
signed char var_14 = (signed char)-58;
int zero = 0;
unsigned char var_16 = (unsigned char)129;
signed char var_17 = (signed char)29;
unsigned int var_18 = 312614565U;
unsigned long long int var_19 = 15451218314646237786ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
