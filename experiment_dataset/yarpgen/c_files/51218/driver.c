#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
unsigned char var_1 = (unsigned char)207;
short var_7 = (short)22301;
unsigned char var_8 = (unsigned char)196;
unsigned char var_10 = (unsigned char)88;
int var_16 = 1858058717;
int zero = 0;
unsigned long long int var_17 = 13642951092707575691ULL;
unsigned char var_18 = (unsigned char)182;
unsigned long long int var_19 = 1553962579602225768ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
