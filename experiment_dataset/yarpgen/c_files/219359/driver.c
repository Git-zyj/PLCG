#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)194;
short var_6 = (short)-4508;
unsigned short var_7 = (unsigned short)29807;
unsigned int var_10 = 2340882952U;
int zero = 0;
short var_16 = (short)16347;
unsigned long long int var_17 = 13376167148852019986ULL;
int var_18 = -809567883;
int var_19 = 936745217;
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
