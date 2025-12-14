#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-9845;
short var_9 = (short)-31647;
short var_10 = (short)-20253;
int var_11 = 343544939;
int zero = 0;
unsigned char var_14 = (unsigned char)239;
int var_15 = -340590728;
unsigned char var_16 = (unsigned char)229;
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
