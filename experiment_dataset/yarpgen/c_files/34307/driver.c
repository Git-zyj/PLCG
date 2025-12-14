#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 442091501U;
short var_3 = (short)-32486;
unsigned char var_6 = (unsigned char)209;
unsigned char var_11 = (unsigned char)191;
unsigned char var_13 = (unsigned char)167;
unsigned int var_14 = 1085157521U;
int zero = 0;
unsigned int var_17 = 2397198650U;
signed char var_18 = (signed char)40;
signed char var_19 = (signed char)6;
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
