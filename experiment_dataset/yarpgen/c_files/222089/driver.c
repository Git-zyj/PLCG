#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)249;
short var_9 = (short)15551;
unsigned char var_10 = (unsigned char)188;
unsigned char var_13 = (unsigned char)43;
int zero = 0;
short var_17 = (short)-12210;
short var_18 = (short)3415;
unsigned char var_19 = (unsigned char)237;
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
