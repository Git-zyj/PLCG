#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7581901310127188430ULL;
unsigned char var_8 = (unsigned char)51;
long long int var_11 = 7553419401412633596LL;
short var_12 = (short)-10032;
int zero = 0;
unsigned long long int var_13 = 618131956070685495ULL;
unsigned short var_14 = (unsigned short)61249;
void init() {
}

void checksum() {
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
