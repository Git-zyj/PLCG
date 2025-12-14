#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1661952677;
unsigned short var_2 = (unsigned short)46820;
unsigned char var_8 = (unsigned char)132;
unsigned int var_10 = 1725150943U;
unsigned int var_13 = 483720936U;
signed char var_14 = (signed char)-79;
signed char var_15 = (signed char)89;
int zero = 0;
signed char var_16 = (signed char)-51;
unsigned int var_17 = 2127891267U;
void init() {
}

void checksum() {
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
