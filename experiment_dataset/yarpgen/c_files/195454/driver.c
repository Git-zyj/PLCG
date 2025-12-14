#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-22409;
unsigned int var_2 = 2298222657U;
long long int var_4 = -4867486139808231890LL;
short var_5 = (short)-32649;
unsigned int var_8 = 3404696897U;
unsigned char var_11 = (unsigned char)50;
int zero = 0;
unsigned char var_12 = (unsigned char)203;
unsigned long long int var_13 = 3102473904425175046ULL;
long long int var_14 = -1726219638850917100LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
