#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)246;
long long int var_8 = 3120038074538295263LL;
long long int var_13 = 6359935932826614693LL;
int zero = 0;
long long int var_20 = -8289404078791445396LL;
short var_21 = (short)-13388;
unsigned long long int var_22 = 13853818520518416468ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
