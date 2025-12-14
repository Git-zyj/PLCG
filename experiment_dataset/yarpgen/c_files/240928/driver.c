#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)176;
short var_5 = (short)11180;
unsigned short var_8 = (unsigned short)53352;
short var_13 = (short)16431;
int zero = 0;
int var_17 = 1801929990;
unsigned char var_18 = (unsigned char)97;
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
