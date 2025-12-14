#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11116;
short var_5 = (short)21267;
unsigned char var_6 = (unsigned char)71;
unsigned int var_10 = 1977131560U;
unsigned short var_15 = (unsigned short)38814;
int zero = 0;
unsigned short var_18 = (unsigned short)4823;
unsigned short var_19 = (unsigned short)16704;
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
