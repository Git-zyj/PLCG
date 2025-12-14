#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)237;
unsigned char var_5 = (unsigned char)4;
unsigned char var_6 = (unsigned char)116;
unsigned char var_7 = (unsigned char)195;
unsigned char var_9 = (unsigned char)219;
unsigned char var_10 = (unsigned char)165;
int zero = 0;
unsigned char var_14 = (unsigned char)144;
unsigned char var_15 = (unsigned char)174;
unsigned char var_16 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
