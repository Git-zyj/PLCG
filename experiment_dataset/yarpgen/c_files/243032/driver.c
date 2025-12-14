#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27051;
unsigned long long int var_8 = 14592893704569884089ULL;
unsigned int var_15 = 2806247874U;
int zero = 0;
unsigned short var_19 = (unsigned short)27165;
unsigned long long int var_20 = 2257071960308505681ULL;
void init() {
}

void checksum() {
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
