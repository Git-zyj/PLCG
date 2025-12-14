#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-90;
unsigned long long int var_1 = 9380954899279975447ULL;
unsigned int var_2 = 3145712805U;
unsigned short var_3 = (unsigned short)55576;
unsigned long long int var_6 = 4776158867698421711ULL;
short var_11 = (short)-21407;
unsigned short var_13 = (unsigned short)30464;
int zero = 0;
short var_14 = (short)7413;
unsigned char var_15 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
