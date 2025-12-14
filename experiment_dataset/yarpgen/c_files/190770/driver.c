#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2888640679U;
short var_5 = (short)1094;
short var_7 = (short)-21072;
int var_8 = -2113045066;
unsigned int var_9 = 3754378143U;
unsigned short var_10 = (unsigned short)8693;
unsigned char var_13 = (unsigned char)246;
unsigned char var_15 = (unsigned char)238;
int zero = 0;
unsigned int var_20 = 2186060161U;
unsigned short var_21 = (unsigned short)50050;
int var_22 = -471654599;
long long int var_23 = 6693470915349346373LL;
int var_24 = -1186810700;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
