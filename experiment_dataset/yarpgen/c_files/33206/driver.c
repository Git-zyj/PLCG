#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1281543532565427744LL;
unsigned char var_5 = (unsigned char)218;
unsigned int var_6 = 658004915U;
unsigned char var_8 = (unsigned char)192;
long long int var_9 = 8597846690245979666LL;
short var_11 = (short)-1721;
int zero = 0;
unsigned char var_18 = (unsigned char)7;
unsigned char var_19 = (unsigned char)4;
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
