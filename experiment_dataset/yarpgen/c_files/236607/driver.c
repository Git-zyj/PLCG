#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33348;
unsigned short var_1 = (unsigned short)52962;
unsigned char var_5 = (unsigned char)216;
unsigned long long int var_6 = 5638694389543483937ULL;
unsigned char var_10 = (unsigned char)11;
int zero = 0;
unsigned char var_12 = (unsigned char)149;
unsigned char var_13 = (unsigned char)7;
unsigned char var_14 = (unsigned char)240;
unsigned char var_15 = (unsigned char)107;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
