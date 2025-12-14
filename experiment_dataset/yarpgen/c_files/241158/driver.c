#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)36;
unsigned long long int var_9 = 13333629308353077958ULL;
unsigned short var_10 = (unsigned short)25589;
unsigned short var_11 = (unsigned short)8158;
unsigned int var_14 = 810003796U;
unsigned long long int var_16 = 14338914976197990322ULL;
unsigned short var_17 = (unsigned short)33676;
int zero = 0;
unsigned short var_18 = (unsigned short)54716;
unsigned short var_19 = (unsigned short)1283;
void init() {
}

void checksum() {
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
