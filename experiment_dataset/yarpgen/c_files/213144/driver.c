#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 487459654U;
long long int var_3 = -5661761375997130330LL;
long long int var_7 = -319174211745709434LL;
unsigned int var_8 = 676369520U;
int zero = 0;
signed char var_11 = (signed char)-87;
unsigned int var_12 = 2144049244U;
void init() {
}

void checksum() {
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
