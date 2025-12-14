#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9946990087923617646ULL;
unsigned long long int var_4 = 3326284969422379394ULL;
short var_11 = (short)29705;
int zero = 0;
long long int var_13 = 7983246151452554795LL;
unsigned long long int var_14 = 10941039078285625317ULL;
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
