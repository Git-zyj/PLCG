#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23366;
unsigned short var_2 = (unsigned short)20480;
unsigned short var_3 = (unsigned short)44722;
signed char var_4 = (signed char)-51;
unsigned int var_6 = 645606163U;
unsigned short var_8 = (unsigned short)16920;
short var_9 = (short)-15589;
int zero = 0;
unsigned char var_13 = (unsigned char)218;
int var_14 = 583605893;
unsigned char var_15 = (unsigned char)228;
unsigned char var_16 = (unsigned char)254;
short var_17 = (short)2619;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
