#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)153;
unsigned short var_3 = (unsigned short)48816;
unsigned long long int var_7 = 4477929915354896480ULL;
unsigned long long int var_10 = 2581482113664890238ULL;
unsigned char var_11 = (unsigned char)34;
int zero = 0;
unsigned short var_13 = (unsigned short)21882;
unsigned int var_14 = 447656290U;
unsigned long long int var_15 = 1822264823822342339ULL;
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
