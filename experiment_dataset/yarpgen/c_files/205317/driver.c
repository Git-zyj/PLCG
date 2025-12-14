#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)178;
signed char var_9 = (signed char)23;
unsigned short var_11 = (unsigned short)49379;
unsigned int var_12 = 2749209093U;
signed char var_13 = (signed char)-119;
unsigned short var_14 = (unsigned short)39653;
int zero = 0;
unsigned short var_18 = (unsigned short)7818;
signed char var_19 = (signed char)-106;
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
