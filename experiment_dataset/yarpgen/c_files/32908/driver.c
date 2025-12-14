#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1086497148;
int var_3 = 798442659;
short var_4 = (short)20551;
short var_9 = (short)24841;
int zero = 0;
unsigned int var_10 = 811177748U;
unsigned char var_11 = (unsigned char)202;
short var_12 = (short)-9990;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
