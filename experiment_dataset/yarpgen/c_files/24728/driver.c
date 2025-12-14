#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-3930;
short var_4 = (short)19076;
unsigned char var_7 = (unsigned char)187;
unsigned long long int var_14 = 1668604596456735661ULL;
int zero = 0;
unsigned long long int var_16 = 14341365145484969646ULL;
short var_17 = (short)26804;
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
