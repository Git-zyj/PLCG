#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-115;
unsigned long long int var_3 = 16068032089750020653ULL;
unsigned long long int var_6 = 4930829569456711281ULL;
unsigned char var_10 = (unsigned char)54;
signed char var_13 = (signed char)122;
unsigned long long int var_14 = 9471955653478112890ULL;
unsigned long long int var_15 = 7487110077758950011ULL;
int zero = 0;
signed char var_16 = (signed char)122;
unsigned long long int var_17 = 7478784572874363501ULL;
short var_18 = (short)7909;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
