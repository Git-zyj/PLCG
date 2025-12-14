#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11419;
int var_4 = -862890918;
unsigned long long int var_5 = 16286760669201423274ULL;
signed char var_9 = (signed char)40;
int zero = 0;
unsigned short var_14 = (unsigned short)25696;
int var_15 = 248505506;
short var_16 = (short)15746;
unsigned int var_17 = 183275747U;
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
