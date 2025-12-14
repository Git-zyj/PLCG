#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13769;
unsigned long long int var_2 = 1340166031599392223ULL;
short var_3 = (short)2744;
unsigned char var_4 = (unsigned char)104;
unsigned long long int var_5 = 2349464359988307811ULL;
unsigned int var_6 = 2638297731U;
int var_7 = -1504085027;
unsigned int var_10 = 2228556701U;
unsigned char var_13 = (unsigned char)2;
unsigned long long int var_15 = 5616104445882734216ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)23;
unsigned long long int var_17 = 10042803671748963663ULL;
int var_18 = -242106498;
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
