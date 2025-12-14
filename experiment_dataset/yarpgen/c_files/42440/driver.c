#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)271;
unsigned int var_3 = 3024244583U;
long long int var_5 = 1473077179605692499LL;
unsigned short var_8 = (unsigned short)46167;
int zero = 0;
unsigned long long int var_10 = 16513772320002770817ULL;
signed char var_11 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
