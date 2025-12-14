#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11986456980515767698ULL;
unsigned int var_6 = 4120232071U;
unsigned short var_7 = (unsigned short)47676;
unsigned char var_8 = (unsigned char)61;
unsigned char var_11 = (unsigned char)244;
unsigned int var_12 = 325872355U;
unsigned int var_14 = 3375747731U;
unsigned short var_18 = (unsigned short)38033;
int zero = 0;
short var_19 = (short)-204;
unsigned char var_20 = (unsigned char)255;
void init() {
}

void checksum() {
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
