#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26133;
int var_2 = -846150081;
short var_11 = (short)-32452;
unsigned int var_14 = 3924624296U;
int var_15 = -1497709911;
int zero = 0;
short var_17 = (short)10646;
signed char var_18 = (signed char)-45;
void init() {
}

void checksum() {
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
