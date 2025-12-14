#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)16893;
short var_5 = (short)11096;
long long int var_6 = 1582213248637738305LL;
long long int var_7 = 1254311255449956371LL;
unsigned int var_8 = 1561288979U;
signed char var_9 = (signed char)38;
int zero = 0;
short var_11 = (short)-17078;
unsigned long long int var_12 = 4208174474661899814ULL;
signed char var_13 = (signed char)71;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
