#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4679;
int var_5 = 1327672006;
short var_6 = (short)-11399;
unsigned char var_8 = (unsigned char)207;
unsigned char var_9 = (unsigned char)95;
unsigned long long int var_10 = 6613201400719661326ULL;
short var_14 = (short)-11797;
int zero = 0;
unsigned long long int var_15 = 5218403272204482674ULL;
unsigned long long int var_16 = 15040332703184682802ULL;
unsigned char var_17 = (unsigned char)4;
void init() {
}

void checksum() {
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
