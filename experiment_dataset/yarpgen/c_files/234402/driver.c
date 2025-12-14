#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-15354;
short var_6 = (short)30122;
unsigned long long int var_12 = 11362235586555926333ULL;
unsigned int var_14 = 155117001U;
int var_16 = 1486722279;
int zero = 0;
unsigned char var_19 = (unsigned char)108;
unsigned char var_20 = (unsigned char)156;
_Bool var_21 = (_Bool)0;
short var_22 = (short)2285;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
