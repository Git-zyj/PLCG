#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
signed char var_1 = (signed char)-5;
unsigned char var_4 = (unsigned char)11;
unsigned char var_5 = (unsigned char)11;
unsigned int var_10 = 2115535494U;
long long int var_15 = -8252122978035787956LL;
int zero = 0;
unsigned int var_16 = 3410225906U;
unsigned int var_17 = 2951989914U;
void init() {
}

void checksum() {
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
