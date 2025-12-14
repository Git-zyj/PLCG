#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4025;
signed char var_8 = (signed char)-29;
int zero = 0;
unsigned char var_18 = (unsigned char)242;
unsigned short var_19 = (unsigned short)33602;
unsigned short var_20 = (unsigned short)30300;
unsigned int var_21 = 1237175823U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
