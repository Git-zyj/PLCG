#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6018932042361861665LL;
unsigned char var_1 = (unsigned char)221;
unsigned long long int var_3 = 16649538595329243104ULL;
unsigned short var_8 = (unsigned short)15344;
unsigned char var_10 = (unsigned char)106;
unsigned char var_11 = (unsigned char)83;
int zero = 0;
signed char var_15 = (signed char)57;
signed char var_16 = (signed char)12;
unsigned int var_17 = 189311785U;
void init() {
}

void checksum() {
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
