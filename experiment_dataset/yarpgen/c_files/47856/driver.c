#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)5129;
unsigned long long int var_6 = 15016035226814592709ULL;
unsigned int var_8 = 1465137484U;
int zero = 0;
signed char var_16 = (signed char)-5;
unsigned char var_17 = (unsigned char)28;
int var_18 = 651767662;
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
