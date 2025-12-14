#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31471;
long long int var_5 = 7993191813631129502LL;
unsigned int var_7 = 727684195U;
long long int var_11 = -7867308474165513594LL;
signed char var_15 = (signed char)9;
int zero = 0;
unsigned char var_16 = (unsigned char)115;
unsigned short var_17 = (unsigned short)25763;
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
