#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)106;
unsigned long long int var_5 = 16568519795271274180ULL;
short var_7 = (short)13671;
unsigned int var_10 = 170219144U;
unsigned char var_12 = (unsigned char)106;
int zero = 0;
unsigned short var_13 = (unsigned short)56625;
unsigned short var_14 = (unsigned short)12220;
unsigned int var_15 = 1073079162U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
