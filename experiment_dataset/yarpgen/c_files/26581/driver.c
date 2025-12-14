#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)22385;
int var_7 = -899574987;
unsigned char var_9 = (unsigned char)108;
unsigned char var_12 = (unsigned char)173;
short var_14 = (short)15178;
unsigned long long int var_16 = 17433930956777418487ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)125;
unsigned char var_20 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
