#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40495;
short var_4 = (short)-3870;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 4483834049511787342ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_16 = (unsigned char)12;
int zero = 0;
unsigned short var_17 = (unsigned short)65112;
unsigned int var_18 = 2683915217U;
void init() {
}

void checksum() {
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
