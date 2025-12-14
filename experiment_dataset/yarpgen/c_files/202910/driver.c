#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-40;
int var_3 = 749174822;
signed char var_4 = (signed char)-48;
unsigned char var_5 = (unsigned char)31;
unsigned int var_6 = 2250692461U;
unsigned short var_8 = (unsigned short)13289;
int zero = 0;
unsigned int var_13 = 947932617U;
unsigned int var_14 = 765147821U;
int var_15 = 1462576748;
void init() {
}

void checksum() {
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
