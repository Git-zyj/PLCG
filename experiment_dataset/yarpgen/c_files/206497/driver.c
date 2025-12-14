#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1072902980;
int var_4 = -2015765824;
long long int var_7 = -5433625630321322228LL;
unsigned int var_9 = 3437182576U;
unsigned short var_13 = (unsigned short)58024;
unsigned long long int var_16 = 4402718880720891837ULL;
unsigned short var_17 = (unsigned short)32446;
int zero = 0;
short var_18 = (short)-26836;
signed char var_19 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
