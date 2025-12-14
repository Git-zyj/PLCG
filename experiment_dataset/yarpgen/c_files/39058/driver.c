#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1565474780;
unsigned long long int var_2 = 1322418211734835395ULL;
unsigned char var_4 = (unsigned char)71;
unsigned short var_8 = (unsigned short)9888;
long long int var_9 = 7033767414725632584LL;
short var_10 = (short)-32151;
unsigned int var_11 = 2104891720U;
int zero = 0;
int var_12 = 779021493;
signed char var_13 = (signed char)100;
signed char var_14 = (signed char)-21;
signed char var_15 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
