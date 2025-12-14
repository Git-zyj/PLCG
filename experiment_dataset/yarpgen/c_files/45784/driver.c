#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12401;
unsigned int var_1 = 4200626965U;
unsigned char var_3 = (unsigned char)136;
unsigned int var_5 = 2025683155U;
short var_7 = (short)22694;
int var_11 = -1916856364;
int zero = 0;
unsigned long long int var_12 = 14242760126452928254ULL;
int var_13 = 580311664;
unsigned int var_14 = 2168667281U;
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
