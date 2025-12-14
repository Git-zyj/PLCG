#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31922;
signed char var_6 = (signed char)31;
unsigned long long int var_7 = 11699276498002925346ULL;
short var_8 = (short)1037;
short var_10 = (short)16788;
int zero = 0;
unsigned char var_15 = (unsigned char)143;
unsigned short var_16 = (unsigned short)65428;
unsigned long long int var_17 = 18408568461203902431ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
