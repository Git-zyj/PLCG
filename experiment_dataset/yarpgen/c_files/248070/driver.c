#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13670;
short var_2 = (short)-11223;
short var_3 = (short)-17154;
short var_4 = (short)4552;
unsigned short var_7 = (unsigned short)61525;
short var_13 = (short)25532;
int zero = 0;
unsigned int var_17 = 282641530U;
unsigned long long int var_18 = 10554217391893644971ULL;
unsigned short var_19 = (unsigned short)24237;
unsigned int var_20 = 2470824088U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
