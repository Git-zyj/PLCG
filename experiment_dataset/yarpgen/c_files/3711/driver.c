#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)93;
short var_2 = (short)-11725;
unsigned short var_4 = (unsigned short)10470;
unsigned short var_7 = (unsigned short)19519;
short var_13 = (short)-19729;
int var_14 = -610343466;
int zero = 0;
unsigned char var_16 = (unsigned char)72;
unsigned long long int var_17 = 17651252052166501151ULL;
void init() {
}

void checksum() {
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
