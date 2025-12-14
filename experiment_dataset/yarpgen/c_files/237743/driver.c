#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 585678320;
unsigned int var_4 = 4158711623U;
unsigned char var_7 = (unsigned char)135;
unsigned short var_14 = (unsigned short)15538;
int var_15 = 799914569;
int zero = 0;
unsigned int var_18 = 1813208653U;
unsigned long long int var_19 = 8287595978921475850ULL;
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
