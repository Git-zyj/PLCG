#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8015;
unsigned int var_1 = 2863997686U;
unsigned char var_6 = (unsigned char)220;
unsigned char var_17 = (unsigned char)239;
int zero = 0;
short var_18 = (short)-12219;
short var_19 = (short)-10599;
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
