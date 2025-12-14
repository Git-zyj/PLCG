#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43490;
unsigned short var_3 = (unsigned short)43311;
unsigned short var_4 = (unsigned short)29743;
unsigned char var_7 = (unsigned char)192;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 4211756096U;
unsigned long long int var_12 = 6207180590814265015ULL;
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
