#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-3825;
unsigned char var_3 = (unsigned char)158;
unsigned char var_5 = (unsigned char)135;
unsigned long long int var_6 = 12247698167169011387ULL;
unsigned short var_10 = (unsigned short)17464;
int zero = 0;
unsigned short var_14 = (unsigned short)53055;
short var_15 = (short)-16772;
void init() {
}

void checksum() {
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
