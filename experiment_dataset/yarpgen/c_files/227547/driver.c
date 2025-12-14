#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8681250745026959745LL;
long long int var_4 = -1669808255563749923LL;
int var_5 = 1956743389;
int var_8 = 1023468120;
int var_9 = -1958243878;
unsigned long long int var_10 = 14142152261215418553ULL;
int zero = 0;
unsigned int var_11 = 1473238293U;
signed char var_12 = (signed char)8;
short var_13 = (short)-6922;
unsigned short var_14 = (unsigned short)16631;
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
