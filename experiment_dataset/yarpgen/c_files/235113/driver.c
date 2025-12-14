#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)140;
unsigned long long int var_4 = 1563966513827123956ULL;
signed char var_6 = (signed char)120;
unsigned char var_8 = (unsigned char)31;
unsigned short var_14 = (unsigned short)59800;
signed char var_16 = (signed char)-81;
int zero = 0;
short var_17 = (short)-7280;
signed char var_18 = (signed char)-75;
unsigned char var_19 = (unsigned char)15;
void init() {
}

void checksum() {
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
