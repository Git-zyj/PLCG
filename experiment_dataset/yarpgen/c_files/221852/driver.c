#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16679931746146748225ULL;
unsigned short var_7 = (unsigned short)44252;
unsigned long long int var_14 = 10108658562949852798ULL;
int zero = 0;
unsigned long long int var_16 = 17947619696298323131ULL;
unsigned long long int var_17 = 2863727717687104775ULL;
short var_18 = (short)876;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
