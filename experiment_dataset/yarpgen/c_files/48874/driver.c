#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 62708177554312977ULL;
unsigned char var_5 = (unsigned char)225;
unsigned long long int var_8 = 7240445185520356497ULL;
unsigned char var_18 = (unsigned char)155;
int zero = 0;
unsigned long long int var_19 = 1901532101072148146ULL;
short var_20 = (short)-13183;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
