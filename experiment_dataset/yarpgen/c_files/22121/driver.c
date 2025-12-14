#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51761;
signed char var_3 = (signed char)-86;
signed char var_9 = (signed char)75;
long long int var_13 = 48219775661012499LL;
int zero = 0;
unsigned short var_14 = (unsigned short)26268;
unsigned int var_15 = 2405912991U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
