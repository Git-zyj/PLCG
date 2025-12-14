#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -268028559;
short var_1 = (short)-1520;
short var_2 = (short)18140;
unsigned int var_3 = 624333179U;
unsigned char var_5 = (unsigned char)155;
unsigned char var_10 = (unsigned char)161;
int var_15 = -2019441389;
int zero = 0;
signed char var_16 = (signed char)84;
unsigned short var_17 = (unsigned short)40605;
unsigned char var_18 = (unsigned char)140;
unsigned int var_19 = 885288276U;
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
