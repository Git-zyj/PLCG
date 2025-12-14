#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1885009345U;
long long int var_4 = -6805049279542599236LL;
int zero = 0;
unsigned long long int var_10 = 7029498687782467953ULL;
int var_11 = -163611620;
unsigned short var_12 = (unsigned short)13065;
unsigned long long int var_13 = 4201237969793141792ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
