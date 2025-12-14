#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7896857042346355906ULL;
long long int var_13 = -6992530590043695166LL;
signed char var_14 = (signed char)-99;
int zero = 0;
signed char var_15 = (signed char)-17;
unsigned int var_16 = 2765275806U;
unsigned char var_17 = (unsigned char)237;
short var_18 = (short)-12347;
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
