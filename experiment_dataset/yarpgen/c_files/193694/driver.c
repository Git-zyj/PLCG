#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1883458548U;
unsigned char var_7 = (unsigned char)90;
unsigned int var_11 = 2379646986U;
int zero = 0;
unsigned char var_16 = (unsigned char)252;
unsigned int var_17 = 3270000633U;
short var_18 = (short)10089;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
