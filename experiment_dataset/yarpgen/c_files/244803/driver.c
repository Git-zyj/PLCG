#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4642387500279066456ULL;
unsigned short var_3 = (unsigned short)12522;
unsigned long long int var_4 = 1086153597639742590ULL;
unsigned long long int var_5 = 13948305891576128499ULL;
unsigned int var_6 = 2336059168U;
unsigned long long int var_10 = 8305910023603041947ULL;
int zero = 0;
short var_12 = (short)-5994;
unsigned long long int var_13 = 15687920145920360399ULL;
void init() {
}

void checksum() {
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
