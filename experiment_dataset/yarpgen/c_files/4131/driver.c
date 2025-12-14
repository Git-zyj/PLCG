#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)7979;
unsigned short var_4 = (unsigned short)222;
unsigned long long int var_6 = 2987583032567992153ULL;
short var_7 = (short)-27747;
unsigned long long int var_11 = 7731019847284062681ULL;
int var_13 = -137794352;
int zero = 0;
unsigned char var_15 = (unsigned char)238;
short var_16 = (short)19073;
short var_17 = (short)-13628;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
