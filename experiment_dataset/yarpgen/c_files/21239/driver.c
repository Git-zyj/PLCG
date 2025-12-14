#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9599085319535325080ULL;
short var_5 = (short)24889;
unsigned long long int var_6 = 14615961929184244348ULL;
unsigned short var_7 = (unsigned short)41998;
unsigned char var_8 = (unsigned char)220;
unsigned short var_12 = (unsigned short)48769;
long long int var_14 = 8024655375175880696LL;
short var_15 = (short)-28402;
int zero = 0;
unsigned int var_16 = 2314569935U;
unsigned short var_17 = (unsigned short)23306;
unsigned int var_18 = 146343906U;
unsigned int var_19 = 25833161U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
