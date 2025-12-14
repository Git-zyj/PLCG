#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)20631;
unsigned int var_5 = 3207722083U;
signed char var_8 = (signed char)-93;
int zero = 0;
short var_15 = (short)5434;
unsigned char var_16 = (unsigned char)38;
unsigned char var_17 = (unsigned char)215;
unsigned char var_18 = (unsigned char)215;
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
