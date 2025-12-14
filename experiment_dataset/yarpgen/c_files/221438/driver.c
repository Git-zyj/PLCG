#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7823139558156913996LL;
unsigned long long int var_4 = 1748444396119833130ULL;
long long int var_5 = 5993501996451381562LL;
long long int var_7 = -1601277482132462799LL;
unsigned short var_8 = (unsigned short)63920;
unsigned long long int var_14 = 4856740781216141441ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)173;
unsigned char var_20 = (unsigned char)100;
long long int var_21 = -6499770980031574750LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
