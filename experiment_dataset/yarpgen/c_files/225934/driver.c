#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1751137740U;
unsigned long long int var_8 = 16974029165397084261ULL;
unsigned long long int var_14 = 17749028341416676213ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)34674;
unsigned char var_18 = (unsigned char)225;
unsigned char var_19 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
