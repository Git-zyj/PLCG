#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)19412;
unsigned short var_4 = (unsigned short)56658;
short var_6 = (short)26014;
int var_10 = 1770714736;
unsigned int var_12 = 1101743423U;
int zero = 0;
long long int var_13 = -1886042165968781700LL;
unsigned char var_14 = (unsigned char)139;
void init() {
}

void checksum() {
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
