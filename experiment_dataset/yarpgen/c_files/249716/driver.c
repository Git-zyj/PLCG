#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8798;
unsigned int var_4 = 3392423498U;
signed char var_5 = (signed char)62;
unsigned long long int var_8 = 2747949973462626319ULL;
int zero = 0;
signed char var_14 = (signed char)109;
short var_15 = (short)9063;
unsigned short var_16 = (unsigned short)53919;
unsigned char var_17 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
