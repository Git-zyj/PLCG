#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
signed char var_5 = (signed char)48;
unsigned long long int var_6 = 10102980255623645269ULL;
unsigned char var_10 = (unsigned char)103;
unsigned char var_11 = (unsigned char)24;
signed char var_14 = (signed char)121;
unsigned char var_16 = (unsigned char)159;
int zero = 0;
unsigned int var_17 = 1739517325U;
signed char var_18 = (signed char)-104;
void init() {
}

void checksum() {
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
