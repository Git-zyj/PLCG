#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-21;
unsigned short var_6 = (unsigned short)43620;
short var_8 = (short)7046;
unsigned char var_14 = (unsigned char)141;
int zero = 0;
signed char var_15 = (signed char)55;
unsigned char var_16 = (unsigned char)255;
short var_17 = (short)-2550;
unsigned long long int var_18 = 12633208154337891368ULL;
unsigned char var_19 = (unsigned char)75;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
