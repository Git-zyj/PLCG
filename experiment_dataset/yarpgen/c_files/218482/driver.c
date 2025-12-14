#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12926670068961436646ULL;
signed char var_3 = (signed char)51;
unsigned int var_6 = 3978768680U;
unsigned int var_7 = 1975711936U;
unsigned char var_8 = (unsigned char)101;
unsigned int var_10 = 3012945236U;
unsigned int var_13 = 244446291U;
int zero = 0;
int var_17 = 1402182697;
short var_18 = (short)21918;
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
