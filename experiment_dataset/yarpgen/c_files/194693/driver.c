#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8177230710168416531ULL;
short var_2 = (short)-24625;
int var_3 = -131258594;
unsigned short var_5 = (unsigned short)12132;
int zero = 0;
int var_10 = 1790023780;
unsigned long long int var_11 = 766993492264301424ULL;
unsigned long long int var_12 = 584464294037014753ULL;
unsigned long long int var_13 = 5457304632202331876ULL;
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
