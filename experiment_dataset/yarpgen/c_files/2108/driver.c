#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5708317596868765438LL;
unsigned char var_3 = (unsigned char)211;
unsigned int var_10 = 3148576830U;
short var_11 = (short)26636;
int zero = 0;
short var_16 = (short)-3632;
long long int var_17 = -161418625021311046LL;
void init() {
}

void checksum() {
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
