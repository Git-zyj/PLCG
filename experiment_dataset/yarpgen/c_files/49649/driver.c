#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
unsigned char var_3 = (unsigned char)81;
signed char var_7 = (signed char)112;
signed char var_8 = (signed char)-120;
unsigned char var_9 = (unsigned char)150;
int zero = 0;
unsigned int var_12 = 888074934U;
short var_13 = (short)6558;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
