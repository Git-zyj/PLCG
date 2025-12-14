#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
long long int var_5 = 6991359959743708231LL;
long long int var_7 = -3853130539465042190LL;
unsigned char var_11 = (unsigned char)41;
unsigned long long int var_12 = 513289041512321253ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)59379;
unsigned int var_15 = 212171350U;
unsigned short var_16 = (unsigned short)51109;
int var_17 = -724594341;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
