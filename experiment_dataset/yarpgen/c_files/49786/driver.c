#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8312981171503749300LL;
unsigned long long int var_3 = 16469077555894024765ULL;
unsigned int var_7 = 2245372409U;
int var_8 = 1354177836;
short var_10 = (short)-17544;
int zero = 0;
short var_11 = (short)-24934;
unsigned short var_12 = (unsigned short)25950;
unsigned long long int var_13 = 10901244137719111553ULL;
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
