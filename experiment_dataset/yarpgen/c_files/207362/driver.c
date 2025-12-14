#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17909;
unsigned int var_2 = 2851089042U;
unsigned short var_9 = (unsigned short)12475;
unsigned short var_13 = (unsigned short)45277;
int zero = 0;
signed char var_14 = (signed char)10;
unsigned char var_15 = (unsigned char)141;
unsigned char var_16 = (unsigned char)153;
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
