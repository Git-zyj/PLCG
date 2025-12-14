#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28808;
unsigned long long int var_4 = 7473311131939940824ULL;
short var_5 = (short)23946;
long long int var_8 = -4706779953680378405LL;
int var_9 = 321986581;
unsigned char var_11 = (unsigned char)129;
signed char var_13 = (signed char)-107;
int zero = 0;
int var_16 = 1654415509;
unsigned char var_17 = (unsigned char)115;
unsigned long long int var_18 = 9593607793891305991ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
