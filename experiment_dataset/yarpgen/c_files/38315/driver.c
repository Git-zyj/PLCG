#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27410;
short var_1 = (short)10482;
short var_4 = (short)-7251;
unsigned short var_5 = (unsigned short)8774;
unsigned int var_8 = 1394415442U;
unsigned short var_12 = (unsigned short)28698;
unsigned long long int var_14 = 16303723263753335893ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)28;
unsigned short var_16 = (unsigned short)38481;
void init() {
}

void checksum() {
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
