#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1949354782U;
unsigned long long int var_3 = 4976812080096568254ULL;
unsigned short var_7 = (unsigned short)60133;
int var_10 = -736614883;
short var_11 = (short)16418;
int zero = 0;
unsigned long long int var_12 = 4367719555132183959ULL;
unsigned char var_13 = (unsigned char)191;
short var_14 = (short)-10754;
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
