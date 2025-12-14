#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
unsigned int var_2 = 2744003883U;
short var_6 = (short)19326;
unsigned int var_7 = 1141638815U;
unsigned char var_9 = (unsigned char)21;
unsigned char var_10 = (unsigned char)47;
int zero = 0;
signed char var_14 = (signed char)0;
unsigned short var_15 = (unsigned short)46975;
unsigned long long int var_16 = 7959227028929164439ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
