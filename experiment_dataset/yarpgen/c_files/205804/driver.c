#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 382391128U;
short var_3 = (short)3813;
short var_7 = (short)9026;
unsigned int var_8 = 2978325831U;
short var_11 = (short)8371;
short var_13 = (short)-18526;
unsigned char var_16 = (unsigned char)4;
int zero = 0;
unsigned long long int var_19 = 2485960107480604960ULL;
short var_20 = (short)-18854;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
