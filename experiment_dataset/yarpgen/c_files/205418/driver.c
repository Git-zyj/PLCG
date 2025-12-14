#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14586178372813065404ULL;
signed char var_7 = (signed char)-66;
signed char var_10 = (signed char)-18;
unsigned short var_14 = (unsigned short)32500;
int zero = 0;
short var_17 = (short)-29365;
int var_18 = -1535754746;
int var_19 = -2016513503;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
