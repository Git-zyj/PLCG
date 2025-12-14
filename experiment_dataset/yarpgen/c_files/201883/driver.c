#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63182;
unsigned long long int var_3 = 1934860232489594184ULL;
unsigned long long int var_4 = 5908388474977200844ULL;
unsigned int var_6 = 2308473914U;
int var_8 = -890175655;
int zero = 0;
signed char var_10 = (signed char)-13;
signed char var_11 = (signed char)116;
int var_12 = 956027171;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
