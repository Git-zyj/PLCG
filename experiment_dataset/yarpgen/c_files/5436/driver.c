#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)113;
unsigned char var_4 = (unsigned char)120;
unsigned char var_7 = (unsigned char)108;
unsigned char var_8 = (unsigned char)248;
signed char var_11 = (signed char)126;
signed char var_14 = (signed char)-43;
int zero = 0;
signed char var_17 = (signed char)-107;
signed char var_18 = (signed char)-48;
unsigned int var_19 = 1249027366U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
