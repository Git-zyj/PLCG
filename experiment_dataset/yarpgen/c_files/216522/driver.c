#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
signed char var_1 = (signed char)-2;
signed char var_2 = (signed char)-79;
int zero = 0;
unsigned int var_17 = 2603096065U;
int var_18 = -994608833;
unsigned short var_19 = (unsigned short)14530;
void init() {
}

void checksum() {
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
