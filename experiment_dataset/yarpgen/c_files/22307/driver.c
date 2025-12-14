#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)55;
unsigned char var_1 = (unsigned char)211;
unsigned short var_6 = (unsigned short)13380;
unsigned int var_9 = 4042756778U;
int zero = 0;
unsigned char var_11 = (unsigned char)226;
signed char var_12 = (signed char)17;
unsigned short var_13 = (unsigned short)49272;
unsigned int var_14 = 836498457U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
