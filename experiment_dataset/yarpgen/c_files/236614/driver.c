#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)50;
unsigned int var_1 = 3308786951U;
unsigned int var_5 = 3176113108U;
unsigned char var_6 = (unsigned char)113;
unsigned char var_8 = (unsigned char)18;
unsigned short var_12 = (unsigned short)2938;
unsigned char var_17 = (unsigned char)112;
int zero = 0;
unsigned short var_18 = (unsigned short)62404;
unsigned int var_19 = 3595952057U;
void init() {
}

void checksum() {
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
