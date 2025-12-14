#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 862071131;
unsigned char var_6 = (unsigned char)116;
short var_7 = (short)6026;
unsigned char var_11 = (unsigned char)74;
int zero = 0;
short var_17 = (short)8814;
unsigned long long int var_18 = 1034259518430078830ULL;
unsigned long long int var_19 = 9915312883073567576ULL;
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
