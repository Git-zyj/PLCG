#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1447507504U;
unsigned int var_2 = 1792118487U;
unsigned short var_4 = (unsigned short)52690;
unsigned char var_5 = (unsigned char)35;
unsigned int var_8 = 2747469757U;
long long int var_11 = -6418298925515796044LL;
int zero = 0;
signed char var_16 = (signed char)-39;
unsigned short var_17 = (unsigned short)39753;
unsigned short var_18 = (unsigned short)30054;
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
