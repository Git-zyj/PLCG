#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)251;
long long int var_7 = 9184640886807739575LL;
unsigned int var_10 = 1918118002U;
int zero = 0;
long long int var_17 = -1813527780063871809LL;
long long int var_18 = 1143576390493888734LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
