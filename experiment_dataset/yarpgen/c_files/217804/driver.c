#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12868;
unsigned long long int var_7 = 5166344485136632626ULL;
unsigned short var_12 = (unsigned short)36409;
short var_16 = (short)23147;
short var_17 = (short)-3616;
int zero = 0;
unsigned char var_18 = (unsigned char)30;
unsigned long long int var_19 = 18158548189908894340ULL;
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
