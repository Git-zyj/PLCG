#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3318;
unsigned long long int var_9 = 14721823650756692956ULL;
unsigned char var_14 = (unsigned char)150;
unsigned char var_17 = (unsigned char)6;
int zero = 0;
short var_19 = (short)-23683;
unsigned int var_20 = 2092860002U;
unsigned long long int var_21 = 10041860677453777198ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
