#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10036;
int var_4 = -823757821;
unsigned char var_5 = (unsigned char)171;
signed char var_6 = (signed char)9;
signed char var_7 = (signed char)18;
unsigned long long int var_8 = 10570966618310639844ULL;
unsigned char var_9 = (unsigned char)233;
int zero = 0;
signed char var_10 = (signed char)96;
unsigned int var_11 = 1673829461U;
unsigned short var_12 = (unsigned short)23864;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
