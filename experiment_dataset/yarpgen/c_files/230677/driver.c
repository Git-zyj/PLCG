#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38099;
int var_6 = 1983893212;
int var_8 = 1491387314;
unsigned long long int var_16 = 17313613904679114746ULL;
int zero = 0;
int var_19 = -229248629;
unsigned int var_20 = 3788631260U;
unsigned long long int var_21 = 8104574250934860681ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
