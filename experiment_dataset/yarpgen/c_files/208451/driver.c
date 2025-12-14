#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2544676753U;
unsigned char var_6 = (unsigned char)4;
signed char var_7 = (signed char)-60;
unsigned short var_10 = (unsigned short)57240;
int zero = 0;
unsigned int var_11 = 2362147303U;
signed char var_12 = (signed char)-103;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
