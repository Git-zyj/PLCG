#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19512;
int var_1 = -1980775651;
unsigned long long int var_4 = 17881831612418283975ULL;
short var_5 = (short)-1998;
long long int var_7 = -9193546318262421942LL;
unsigned char var_8 = (unsigned char)133;
unsigned int var_15 = 3996149710U;
int zero = 0;
long long int var_16 = -417632239050816798LL;
signed char var_17 = (signed char)66;
void init() {
}

void checksum() {
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
