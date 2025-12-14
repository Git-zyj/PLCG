#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)110;
long long int var_1 = 8456951621613055036LL;
unsigned char var_2 = (unsigned char)244;
unsigned long long int var_3 = 8068703040992193894ULL;
short var_9 = (short)24576;
unsigned char var_16 = (unsigned char)80;
int zero = 0;
int var_19 = -322781830;
int var_20 = 166572344;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
