#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)16;
unsigned int var_5 = 3435347612U;
short var_6 = (short)10839;
short var_8 = (short)29876;
unsigned int var_10 = 2607306118U;
unsigned int var_11 = 3162351787U;
int zero = 0;
signed char var_12 = (signed char)-102;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 4191691580U;
unsigned short var_15 = (unsigned short)62298;
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
