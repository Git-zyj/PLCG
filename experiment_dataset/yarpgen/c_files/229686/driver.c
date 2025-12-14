#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)36;
unsigned short var_10 = (unsigned short)11326;
unsigned short var_14 = (unsigned short)54195;
short var_15 = (short)-5236;
int zero = 0;
short var_18 = (short)-17180;
unsigned int var_19 = 3693149692U;
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
