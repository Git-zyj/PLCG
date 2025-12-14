#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)26;
unsigned int var_10 = 1106653218U;
unsigned char var_13 = (unsigned char)37;
int zero = 0;
unsigned long long int var_18 = 8498491053689354712ULL;
unsigned int var_19 = 1254340502U;
long long int var_20 = 124570021872608602LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
