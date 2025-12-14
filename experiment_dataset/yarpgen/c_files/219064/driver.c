#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)120;
unsigned long long int var_2 = 9155126330618942552ULL;
short var_8 = (short)-17400;
unsigned char var_10 = (unsigned char)128;
int zero = 0;
long long int var_14 = 3733236082455726883LL;
unsigned int var_15 = 1755075599U;
void init() {
}

void checksum() {
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
