#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30565;
unsigned char var_7 = (unsigned char)74;
unsigned long long int var_9 = 2768037287662251548ULL;
unsigned long long int var_10 = 17144999492911895169ULL;
unsigned char var_15 = (unsigned char)183;
short var_16 = (short)-5338;
int zero = 0;
unsigned long long int var_20 = 6115136398440507060ULL;
unsigned int var_21 = 215562677U;
signed char var_22 = (signed char)-125;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
