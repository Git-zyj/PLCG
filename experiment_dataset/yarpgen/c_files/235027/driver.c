#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)146;
unsigned char var_1 = (unsigned char)66;
unsigned int var_2 = 2955652430U;
unsigned short var_3 = (unsigned short)48779;
int var_4 = -2103798205;
int var_6 = 802301316;
unsigned char var_7 = (unsigned char)111;
unsigned short var_8 = (unsigned short)56119;
unsigned short var_9 = (unsigned short)23865;
int zero = 0;
unsigned long long int var_10 = 5106750115266547528ULL;
unsigned long long int var_11 = 8451806052821691749ULL;
short var_12 = (short)-12704;
unsigned short var_13 = (unsigned short)27356;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
