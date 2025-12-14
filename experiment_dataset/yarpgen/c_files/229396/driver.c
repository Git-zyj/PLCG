#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2017099637U;
unsigned int var_1 = 1702261363U;
short var_4 = (short)12125;
unsigned long long int var_5 = 13422411083370872939ULL;
int var_8 = -562165617;
unsigned char var_10 = (unsigned char)247;
int zero = 0;
int var_11 = -1305744145;
unsigned char var_12 = (unsigned char)224;
int var_13 = -1850153283;
void init() {
}

void checksum() {
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
