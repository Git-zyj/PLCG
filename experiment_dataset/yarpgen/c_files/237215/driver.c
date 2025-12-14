#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17919;
unsigned short var_4 = (unsigned short)19898;
unsigned long long int var_5 = 7693294240925501248ULL;
unsigned int var_6 = 679262058U;
unsigned long long int var_9 = 14133771799048661206ULL;
int zero = 0;
int var_11 = -267284283;
unsigned short var_12 = (unsigned short)4972;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
