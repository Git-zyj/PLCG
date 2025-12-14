#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-22370;
long long int var_9 = 7831447664530783521LL;
short var_10 = (short)2008;
int zero = 0;
long long int var_12 = -3808078830584551544LL;
unsigned char var_13 = (unsigned char)58;
unsigned short var_14 = (unsigned short)47925;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
