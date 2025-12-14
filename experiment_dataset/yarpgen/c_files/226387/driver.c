#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8648109241967298630ULL;
signed char var_3 = (signed char)112;
unsigned short var_8 = (unsigned short)5266;
int var_13 = -756814700;
unsigned long long int var_17 = 11191599210508259646ULL;
short var_18 = (short)-14343;
int zero = 0;
unsigned char var_20 = (unsigned char)67;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
