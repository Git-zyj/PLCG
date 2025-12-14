#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)126;
signed char var_6 = (signed char)107;
unsigned short var_8 = (unsigned short)26777;
unsigned short var_10 = (unsigned short)22197;
signed char var_16 = (signed char)-83;
int zero = 0;
unsigned char var_17 = (unsigned char)35;
unsigned long long int var_18 = 6238761408079476699ULL;
signed char var_19 = (signed char)-65;
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
