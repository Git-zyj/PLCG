#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)137;
signed char var_2 = (signed char)-93;
unsigned char var_12 = (unsigned char)33;
int var_13 = -737987429;
int zero = 0;
unsigned short var_15 = (unsigned short)1661;
unsigned char var_16 = (unsigned char)237;
void init() {
}

void checksum() {
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
