#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)116;
unsigned short var_7 = (unsigned short)667;
int var_10 = -1314258154;
signed char var_11 = (signed char)77;
int zero = 0;
short var_16 = (short)-2454;
unsigned long long int var_17 = 11217126375247847721ULL;
long long int var_18 = 3669633799156332303LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
