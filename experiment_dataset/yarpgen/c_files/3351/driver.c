#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)30;
int var_6 = 1894513439;
unsigned char var_7 = (unsigned char)40;
unsigned int var_8 = 4016439778U;
short var_9 = (short)27492;
unsigned char var_12 = (unsigned char)173;
long long int var_14 = -6347825846470140499LL;
signed char var_15 = (signed char)115;
int zero = 0;
signed char var_16 = (signed char)88;
unsigned char var_17 = (unsigned char)51;
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
