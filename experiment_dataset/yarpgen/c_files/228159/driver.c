#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30381;
unsigned long long int var_4 = 5618921080114241449ULL;
unsigned long long int var_8 = 7512939741910223327ULL;
unsigned short var_10 = (unsigned short)49687;
int zero = 0;
short var_12 = (short)-25497;
unsigned short var_13 = (unsigned short)18416;
unsigned short var_14 = (unsigned short)342;
void init() {
}

void checksum() {
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
