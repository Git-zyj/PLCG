#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1900497091;
int var_3 = 171895213;
int var_8 = 897082834;
unsigned long long int var_11 = 837016776848393703ULL;
int zero = 0;
unsigned long long int var_12 = 11341620118380626528ULL;
int var_13 = -1546367715;
unsigned short var_14 = (unsigned short)37578;
short var_15 = (short)-4350;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
