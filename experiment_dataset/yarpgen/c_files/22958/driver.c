#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)14;
signed char var_4 = (signed char)64;
int var_7 = 209205394;
unsigned short var_14 = (unsigned short)46866;
signed char var_16 = (signed char)-72;
int zero = 0;
int var_17 = -906893927;
signed char var_18 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
