#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49182;
int var_2 = 1346826065;
unsigned int var_6 = 4077861484U;
int var_11 = 1956330748;
int zero = 0;
signed char var_13 = (signed char)70;
unsigned long long int var_14 = 15904220292994614229ULL;
int var_15 = -1154573947;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
