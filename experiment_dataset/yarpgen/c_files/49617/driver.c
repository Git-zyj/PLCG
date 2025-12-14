#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7523;
unsigned long long int var_2 = 1962549745714507062ULL;
unsigned long long int var_5 = 11414949776477728928ULL;
unsigned int var_7 = 2819746085U;
short var_8 = (short)-11483;
unsigned long long int var_11 = 13405292189290640784ULL;
int zero = 0;
int var_13 = 492755739;
unsigned long long int var_14 = 2804694769998693705ULL;
unsigned long long int var_15 = 14750861177993181914ULL;
long long int var_16 = 1082797607133236113LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
