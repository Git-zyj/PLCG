#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51740;
unsigned char var_5 = (unsigned char)186;
signed char var_11 = (signed char)8;
unsigned int var_13 = 8891278U;
unsigned short var_14 = (unsigned short)5934;
int zero = 0;
signed char var_16 = (signed char)109;
unsigned short var_17 = (unsigned short)36722;
short var_18 = (short)4793;
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
