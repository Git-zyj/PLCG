#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5342443731940468706ULL;
unsigned int var_2 = 814236839U;
_Bool var_6 = (_Bool)1;
int var_7 = 591269230;
int var_11 = 115084714;
long long int var_12 = 2610342442248476160LL;
unsigned char var_14 = (unsigned char)186;
int zero = 0;
int var_19 = 2085738164;
short var_20 = (short)19953;
short var_21 = (short)-27382;
long long int var_22 = 5648337151704843925LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
