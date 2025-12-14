#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-2;
short var_4 = (short)-8102;
long long int var_9 = -3810836500439808543LL;
signed char var_10 = (signed char)-85;
unsigned short var_12 = (unsigned short)53027;
signed char var_13 = (signed char)-125;
int zero = 0;
unsigned int var_14 = 3826778308U;
signed char var_15 = (signed char)-88;
unsigned short var_16 = (unsigned short)11259;
long long int var_17 = -6183699698986493157LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
