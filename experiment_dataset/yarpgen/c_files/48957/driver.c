#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7731841861729705535LL;
unsigned char var_3 = (unsigned char)8;
unsigned int var_4 = 3396876304U;
int var_6 = -687939577;
short var_11 = (short)-27561;
int zero = 0;
unsigned int var_13 = 1766317140U;
short var_14 = (short)-30451;
void init() {
}

void checksum() {
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
