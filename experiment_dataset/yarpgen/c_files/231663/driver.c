#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
short var_1 = (short)20561;
long long int var_2 = -6922956596533590487LL;
unsigned char var_7 = (unsigned char)198;
short var_9 = (short)3976;
unsigned char var_11 = (unsigned char)136;
int zero = 0;
unsigned char var_12 = (unsigned char)57;
unsigned char var_13 = (unsigned char)75;
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
